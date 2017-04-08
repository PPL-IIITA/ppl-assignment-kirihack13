#include "boy.h"
#include "rel.h"
#include "gift.h"
#include "give_gift.h"
#include "breakup.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
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
    vector<boy> b;
    vector<gift> g; //!gift vector
    vector<rel> r; //! relation vector
    giveGift(g,r); //! function called to allocate gifts
    sort(r.begin(), r.end(), cmp1);
    int k;
    cout << "Enter value of k:\n";
    cin >> k;
    int ls;
    vector<rel>::iterator iterator;
    iterator = r.end() - 1;
    int size = r.size();
    if(size < k){
    	k = size;
    }
    breakUp(r, b, k);
    return 0;
}
