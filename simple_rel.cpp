#include "simple_rel.h"
#include <fstream>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <cstdlib>
bool cmp1(girl &g1, girl &g2){
	//!comparator function to set maintenance values increasing order
	return g1.getBudget() < g2.getBudget();
}
bool cmp2(boy &b1, boy &b2){
	//!comparator function to set attractiveness values decreasing order
	return b1.getAttractiveness() > b2.getAttractiveness();
}
using namespace std;
void simpleRel(vector<boy> &b, vector<girl> &g){
	srand(time(NULL));
	ifstream input;
	vector<girl> gt;
	int z = 0;
	int j = rand()%20 + 1; //!no of girls
	int k = rand()%50 + 50;//!no of boys
	input.open("blist.csv");//!list of boys
	while(z < k){
		string name;
		int attractiveness;
		int intelligence;
		int budget;
		string x;
		string y;
		int min_attract;
		int type;
		//!y to flush all non important commas
		input >> name >> y >> attractiveness >> y >> intelligence >> y >> min_attract >> y >> x >> y >> type >> y >> budget;
		boy b1 (name, attractiveness, intelligence, min_attract, false, type, budget);
		b.push_back(b1); //!boy object added to vector
		z++;
	}
	sort(b.begin(), b.end(), cmp2);
	input.close();
	z = 0;
	input.open("glist.csv");//!list of girls
	while(z < j){
		string name;
		int attractiveness;
		int intelligence;
		int budget;
		string x;
		string y;
		int pref;
		int type;
		//!y to flush all non important commas 
		input >> name >> y >> attractiveness >> y >> intelligence >> y >> x >> y >> type >> y >> pref >> y >> budget;
		girl g1 (name, attractiveness, intelligence, false, type, pref, budget);
		g.push_back(g1);//!girl object added to vector
		gt.push_back(g1);
		z++;
	}
	int check = 1;
	sort(g.begin(), g.end(), cmp1);
	sort(gt.begin(), gt.end(), cmp1);
	input.close();
	vector <girl> :: iterator giterator;
	vector <boy> :: iterator biterator;
	giterator = g.begin();
	biterator = b.begin();
	ofstream output1;
	ofstream output2;
	output1.open("simple_couple.csv");//!list of couples
	output2.open("simple_couple_full.csv");//!list with full info on couples
	while(giterator != g.end() && biterator != b.end()){
		if(check%2 == 0){
			while(giterator->getIs_commited() == true){
				giterator++;
			}
			int i = 0;
			int max_att = 0;
			int max_budget = 0;
			int max_intl = 0;
			vector<boy>:: iterator iterator1;
			vector<boy>:: iterator iterator2;
			for(iterator1 = b.begin(); iterator1 < b.end(); iterator1++){ //!finding suitable boy for girl according to her preference
				if(iterator1->getBudget() > giterator->getBudget() && iterator1->getIs_commited() == false){
					if(giterator->getPreference() == 1 && iterator1->getBudget() > max_budget){//!calculating boyfriend with max budget
						max_budget = iterator1->getBudget();
						i = 1;
						iterator2 = iterator1;
					}
					else if(giterator->getPreference() == 2 && iterator1->getAttractiveness() > max_att){//!calculating boyfriend with max attractiveness
						max_att = iterator1->getAttractiveness();
						i = 1;
						iterator2 = iterator1;
					}
					else if(giterator->getPreference() == 3 && iterator1->getIntelligence() > max_intl){
						max_intl = iterator1->getIntelligence();//!calculating boyfriend with max intelligence
						i = 1;
						iterator2 = iterator1;
					}
				}
			}
			if(i == 0)
				continue;
			iterator2->setIs_commited(true);
			cout << giterator->getName() << " " << iterator2->getName() << "\n";
			output1 << giterator->getName() << " , " << iterator2->getName() << "\n";//!generating couple info
			output2 << giterator->getName() << " , " << iterator2->getName() << " , " << giterator->getBudget() << " , " << iterator2->getBudget() << " , " << giterator->getIntelligence() << " , " << iterator2->getIntelligence() << " , " << giterator->getAttractiveness() << " , " << iterator2->getAttractiveness() << " , " << giterator->getType() << " , " << giterator->getPreference() << " , " << iterator2->getType() << "\n";
			giterator->setIs_commited(true);
			giterator++;
		}else{
			//!allocating girl for a boy
				while(biterator->getIs_commited() == true){
					biterator++;
				}
				int mn = 0;
				int max_att = 0;
				vector<girl>:: iterator giterator1;
				vector<girl>:: iterator giterator2;
				for(giterator1 = g.begin(); giterator1 < g.end(); giterator1++){ //!finding suitable boy for girl according to her preference
					if(giterator1->getAttractiveness() > max_att && giterator1->getIs_commited() == false){
						max_att = giterator1->getAttractiveness();//!calculating girl with max attractiveness
						mn = 1;
						giterator2 = giterator1;
					}
				}
				if(mn == 0)
					continue;
				giterator2->setIs_commited(true);
				cout << giterator2->getName() << " " << biterator->getName() << "\n";
				output1 << giterator2->getName() << " , " << biterator->getName() << "\n";
				output2 << giterator2->getName() << " , " << biterator->getName() << " , " << giterator2->getBudget() << " , " << biterator->getBudget() << " , " << giterator2->getIntelligence() << " , " << biterator->getIntelligence() << " , " << giterator2->getAttractiveness() << " , " << biterator->getAttractiveness() << " , " << giterator2->getType() << " , " << giterator2->getPreference() << " , " << biterator->getType() << "\n";
				biterator->setIs_commited(true);
				biterator++;
			
		}
		check++;
	}
	output1.close();
	output2.close();
}
