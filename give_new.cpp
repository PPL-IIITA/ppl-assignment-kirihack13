#include "give_new.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
void giveAl(std::vector<gift> &ug, std::vector<gift> &eg, std::vector<gift> &lg, std::vector<rel> &r){
	srand(time(NULL));
	ifstream input;
	string x;
	input.open("egift.csv");//!list of essential gifts
	int l = rand()%15 + 1; //!no of luxury gifts
	int e = rand()%30 + 1; //!no of essential gifts
	int u = rand()%30 + 1; //!no of utility gifts
	int z = 0;
	while(input.eof() == 0 && z < e){
		int price;
		int value;
		input >> value >> x >> price;
		gift g1 (value, price);
		eg.push_back(g1);
	}
	input.close();
	input.open("ugift.csv");//!list of utility gifts
	z = 0;
	while(input.eof() == 0 && z < u){
		int price;
		int value;
		int util_val;
		float util_class;
		input >> value >> x >> price >> x >> util_val >> x >> util_class;
		gift g1 (value, price, util_val, util_class);
		ug.push_back(g1);
	}
	input.close();
	input.open("lgift.csv");//!list of luxury gifts
	z = 0;
	while(input.eof() == 0 && z < l){
		int price;
		int value;
		int lux_rat;
		float difficulty;
		input >> value >> x >> price >> x >> lux_rat >> x >> difficulty;
		gift g1 (value, price, lux_rat, difficulty);
		lg.push_back(g1);
	}
	input.close();
	input.open("couple_full.csv"); //!list of couples formed
	ofstream output;
	output.open("log.csv");
	while(input.eof() == 0){
		string bname;
		string gname;
		double happiness;
		double bhappiness = 0;
		double ghappiness = 0;
		int compatibility = 0;
		int budget;
		int rem_maintenance;
		int bintelligence;
		int gintelligence;
		int battractiveness;
		int gattractiveness;
		int gtype;
		int pref;
		int btype;
		vector<gift>::iterator uiterator;
		vector<gift>::iterator eiterator;
		vector<gift>::iterator literator;
		int sum = 0;
		int valuesum = 0;
		//!x to flush of not important commas
		input >> gname >> x >> bname >> x >> rem_maintenance >> x >> budget >> x >> gintelligence >> x >> bintelligence >> x >> gattractiveness >> x >> battractiveness >> x >> gtype >> x >> pref >> x >> btype;
		uiterator = ug.begin();
		eiterator = eg.begin();
		literator = lg.begin();
		int srl = 0;
		output << gname << " , " << bname << endl;
        while(rem_maintenance > 0){
            sum += uiterator->getPrice() + eiterator->getPrice() + literator->getPrice(); //!calculate total price
            valuesum += (uiterator->getValue() + eiterator->getValue() + literator->getValue());//!calculate sum of values
            rem_maintenance = rem_maintenance - uiterator->getPrice() - eiterator->getPrice() - literator->getPrice();//!calculate remaining budget
            output << srl << " , " << "gift" << srl <<"\n";
            srl++;
            output << srl << " , " << "gift" << srl <<"\n";
            srl++;
            output << srl << " , " << "gift" << srl <<"\n";
            uiterator->setAlc();//!set gift to be allocated so that gift can no longer can be used
            eiterator->setAlc();//!set gift to be allocated so that gift can no longer can be use
            literator->setAlc();//!set gift to be allocated so that gift can no longer can be use
            uiterator++;
            eiterator++;
            literator++;
            srl++; // serial no of gift
        }
        if(gtype == 1 && literator != lg.end()){ //!calculate happiness for girl type 1
            output << srl << " , " << "gift" << srl << "\n";
            sum += literator->getValue() * 2;
            ghappiness = log(sum);
            srl++;
        }
        if(gtype == 2){//!calculate happiness for girl type 2
            sum = sum + valuesum;
            ghappiness = sum;
        }
        if(gtype == 3)//!calculate happiness for girl type 3
            ghappiness = exp(sum);

        if(btype == 1)//!calculate happiness for boy type 1
		bhappiness = budget - sum;
	if(btype == 2)//!calculate happiness for boy type 2
		bhappiness = ghappiness;
	if(btype == 3)//!calculate happiness for boy type 3
		bhappiness = gintelligence;
        happiness = bhappiness + ghappiness;//!calculate couple happiness
        compatibility = abs(budget - rem_maintenance) + abs(gattractiveness - battractiveness) + abs(bintelligence - gintelligence);//!calculate couple compatibility
        rel r1(bname,gname,happiness,compatibility);
        r.push_back(r1);
    }
    input.close();
    output.close();
	}		
