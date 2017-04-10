#include "getgf.h"
#include <fstream>
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct cp{
	string bname;
	string gname;
};
void getGirl(vector<boy> &b){
	srand(time(NULL));
	ifstream input;
	int z = 0;
	int k = rand()%50 + 50;//!no of boys to generate list
	input.open("blist.csv");//!list of boys from which list is generated
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
	string mn;
	input.close();
	input.open("couple.csv");
	vector<struct cp> clist;
	while(input.eof() == 0){//!creating couple list 
		struct cp tempc;
		input >> tempc.gname >> mn >> tempc.bname;
		clist.push_back(tempc);
	}
	int flag = 0;
	vector<boy> :: iterator biterator;
	vector<struct cp> :: iterator citerator;
	biterator = b.begin();//!iterator to iterate all boys
	while(biterator != b.end()){
		citerator = clist.begin();//!iterator to iterate all commited boys in cp struct
		while(citerator != clist.end()){
			if(biterator->getName() == citerator->bname){
				cout << citerator->gname << endl;
				flag = 1;
				break;
			}
			citerator++;
		}
		if(flag == 0){
			cout << "No Girlfriend" << endl;
		}
		flag = 0;
		biterator++;
	}
}
