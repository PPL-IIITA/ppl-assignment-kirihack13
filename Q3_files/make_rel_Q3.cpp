#include "make_rel_Q3.h"
#include <fstream>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
void makeRelQ3(vector<boy_Q3> &b, vector<girl_Q3> &g){
	srand(time(NULL));
	ifstream input;
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
		boy_Q3 b1 (name, attractiveness, intelligence, min_attract, false, type, budget);
		b.push_back(b1); //!boy object added to vector
		z++;
	}
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
		girl_Q3 g1 (name, attractiveness, intelligence, pref, false, type, budget);
		g.push_back(g1);//!girl object added to vector
		z++;
	}
	input.close();
	input.open("glist.csv");
	z = 0;
	ofstream output1;
	ofstream output2;
	output1.open("couple.csv");//!list of couples
	output2.open("couple_full.csv");//!list with full info on couples
	while(z < j){
		string name;
		int attractiveness;
		int intelligence;
		int budget;
		string x;
		string y;
		int pref;
		int type;
		int i = 0;
		input >> name >> y >> attractiveness >> y >> intelligence >> y >> x >> y >> type >> y >> pref >> y >> budget;
		vector<boy_Q3>:: iterator iterator1;
		vector<boy_Q3>:: iterator iterator2;
		int max_att = 0;
		int max_budget = 0;
		int max_intl = 0;
		for(iterator1 = b.begin(); iterator1 < b.end(); iterator1++){ //!finding suitable boy for girl according to her preference
			if(iterator1->getBudget() > budget && iterator1->getIs_commited() == false){
				if(pref == 1 && iterator1->getBudget() > max_budget){
					max_budget = iterator1->getBudget();
					i = 1;
					iterator2 = iterator1;
				}
				else if(pref == 2 && iterator1->getAttractiveness() > max_att){
					max_att = iterator1->getAttractiveness();
					i = 1;
					iterator2 = iterator1;
				}
				else if(pref == 3 && iterator1->getIntelligence() > max_intl){
					max_intl = iterator1->getIntelligence();
					i = 1;
					iterator2 = iterator1;
				}
			}
		}
		if(i == 0)
			continue;
		iterator2->setIs_commited(true);
		cout << name << " " << iterator2->getName() << "\n";
		output1 << name << " , " << iterator2->getName() << "\n";
		output2 << name << " , " << iterator2->getName() << " , " << budget << " , " << iterator2->getBudget() << " , " << intelligence << " , " << iterator2->getIntelligence() << " , " << attractiveness << " , " << iterator2->getAttractiveness() << " , " << type << " , " << pref << " , " << iterator2->getType() << "\n";
		z++;
	}
	input.close();
	output1.close();
	output2.close();
}
