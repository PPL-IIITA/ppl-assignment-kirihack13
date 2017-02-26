#include "make_rel.h"
#include <fstream>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
void makeRel(vector<boy> &b, vector<girl> &g){
	srand(time(NULL));
	ifstream input;
	int z = 0;
	int j = rand()%20 + 1;
	int k = rand()%50 + 50;
	input.open("blist.csv");
	while(z < k){
		string name;
		int attractiveness;
		int intelligence;
		int budget;
		string x;
		string y;
		int min_attract;
		int type;
		input >> name >> y >> attractiveness >> y >> intelligence >> y >> min_attract >> y >> x >> y >> type >> y >> budget;
		boy b1 (name, attractiveness, intelligence, min_attract, false, type, budget);
		b.push_back(b1);
		z++;
	}
	input.close();
	z = 0;
	input.open("glist.csv");
	while(z < j){
		string name;
		int attractiveness;
		int intelligence;
		int budget;
		string x;
		string y;
		int pref;
		int type;
		input >> name >> y >> attractiveness >> y >> intelligence >> y >> x >> y >> type >> y >> pref >> y >> budget;
		girl g1 (name, attractiveness, intelligence, false, type, pref, budget);
		g.push_back(g1);
		z++;
	}
	input.close();
	input.open("glist.csv");
	z = 0;
	ofstream output1;
	ofstream output2;
	output1.open("couple.csv");
	output2.open("couple_full.csv");
	cout << j << " " << k << endl;
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
		//cout << name << " " <<attractiveness<<" " << intelligence << " "<< x << " "<< type << " "<< pref << " "<< budget<< endl;
		vector<boy>:: iterator iterator1;
		vector<boy>:: iterator iterator2;
		int max_att = 0;
		int max_budget = 0;
		int max_intl = 0;
		//cout << b.size() << "\n";
		for(iterator1 = b.begin(); iterator1 < b.end(); iterator1++){
			//cout<<"hello" << i<< endl;
			//i++;
			if(iterator1->getBudget() > budget && iterator1->getIs_commited() == false){
				if(pref == 1 && iterator1->getBudget() > max_budget){
					max_budget = iterator1->getBudget();
					//cout << max_budget << " "<< endl;
					i = 1;
					iterator2 = iterator1;
				}
				else if(pref == 2 && iterator1->getAttractiveness() > max_att){
					max_att = iterator1->getAttractiveness();
					i = 1;
					//cout << max_att << " "<< endl;
					iterator2 = iterator1;
				}
				else if(pref == 3 && iterator1->getIntelligence() > max_intl){
					max_intl = iterator1->getIntelligence();
					i = 1;
					//cout << max_intl << " "<< endl;
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
