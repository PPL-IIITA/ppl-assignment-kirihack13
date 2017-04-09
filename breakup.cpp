#include "breakup.h"
#include <fstream>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;
void breakUp(vector<rel> &r, vector<boy> &b, int kin, int t){
	srand(time(NULL));
	ifstream input;
	int sz = r.size();
	vector<rel> :: iterator iterator;
	int z = 0;
	int ls;
	int k = rand()%50 + 50;//!no of boys
	input.open("blist.csv");//!list of boys
	bool m = false;
	while(z < k && input.eof() == 0){
		ls = 1;
		iterator = r.begin();
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
		while(iterator != r.end()){
			if(name == iterator->getBname()){
				if(iterator->getHappiness() >= t && ls > kin){
					m = true;
				}else{
					m = false;
				} 
			}
			ls++;
			iterator++;
		}
		//cout << m << endl;
		boy b1 (name, attractiveness, intelligence, min_attract, m, type, budget);
		b.push_back(b1); //!boy object added to vector
		z++;
	}
	input.close();
	input.open("couple_full.csv");
	string x;
	int ref = 1;
	if(kin != 0){
		ref = 0;
	}
	while(input.eof() == 0){
		ls = 1;
		iterator = r.begin();
		string bname;
		string gname;
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
		int i = 0;
		//!x to flush of not important commas
		input >> gname >> x >> bname >> x >> rem_maintenance >> x >> budget >> x >> gintelligence >> x >> bintelligence >> x >> gattractiveness >> x >> battractiveness >> x >> gtype >> x >> pref >> x >> btype;
		while((ls <= kin || ref == 1) && iterator != r.end()){
			//cout << ls << endl;
			if(iterator->getGname() == gname){
				vector<boy>:: iterator iterator1;
				vector<boy>:: iterator iterator2;
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
				//cout << i << endl;
				if(i == 0){
					ls++;
					iterator++;
					continue;
				}	
				iterator2->setIs_commited(true);
				cout << gname << " " << iterator2->getName() << "\n";
				break;
			}
			ls++;
			iterator++;
		}
    }

}
