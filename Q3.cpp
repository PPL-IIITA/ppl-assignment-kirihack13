#include <iostream>
#include "make_rel_Q3.h"
#include <vector>
#include "rel.h"
#include "gift.h"
#include "give_gift.h"
#include <algorithm>
#include <fstream>
#include <ctime>
using namespace std;
bool cmp1(rel &r1, rel &r2){
	//!comparator function to set happiness values decreasing order
	return r1.getHappiness() > r2.getHappiness();
}
bool cmp2(rel &r3, rel &r4){
	//!comparator function to set happiness values increasing order
	return r3.getCompatibility() < r4.getCompatibility();
}
int main(){
	srand(time(NULL));
	std::vector<boy_Q3> b;
	std::vector<girl_Q3> g;
	makeRelQ3(b, g); //!function called to make relation
	    vector<gift> g1; //!gift vector
	    vector<rel> r; //! relation vector
	    giveGift(g1,r); //! function called to allocate gifts
	    sort(r.begin(), r.end(), cmp1);
	    int k = rand()%15 + 1;
	    cout << "Random generated value of k: " << k << "\n";
	    int ls = k;
	    vector<rel>::iterator iterator;
	    iterator = r.begin();
	    int size = r.size();
	    if(size < k){
	    	k = size;
	    }
	    cout << k << " Happy Couples:\n";
	    while(ls-- && iterator != r.end()) {
		cout << iterator->getBname() << " " << iterator->getGname() << " " << iterator->getHappiness() << "\n";
		iterator++;
	    }
	    sort(r.begin(), r.end(), cmp2);
	    iterator = r.begin();
	    size = r.size();
	    ls = k;
	    cout << "---------\n" << k << " Compatible Couples:\n";
	    while(ls-- && iterator != r.end()) {
		cout << iterator->getBname() << " " << iterator->getGname() << " " << iterator->getCompatibility() << "\n";
		iterator++;
	    }
	return 0;
}
