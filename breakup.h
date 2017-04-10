#ifndef BREAKUP_H_
#define BREAKUP_H_
#include "boy.h"
#include "rel.h"
#include <iostream>
#include <vector>
class breakup{
	public:
		//friend keyword to make function usable by all classes
		friend void breakUp(std::vector<rel> &r, std::vector<boy> &b, int kin, int t); //!friendly function so that can be used in other classes if not used gives function not declared error in other classes
};
void breakUp(std::vector<rel> &r,std::vector<boy> &b, int kin, int t);
#endif
