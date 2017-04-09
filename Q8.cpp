#include "rel.h"
#include "gift.h"
#include "give_new.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
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
int main()
{
    srand(time(NULL));
    vector<gift> ug; //!gift vector
    vector<gift> eg; //!gift vector
    vector<gift> lg; //!gift vector
    vector<rel> r; //! relation vector
    giveAl(ug, eg, lg, r); //! function called to allocate gifts
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
