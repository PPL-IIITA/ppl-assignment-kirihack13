#ifndef MAKE_REL_H_
#define MAKE_REL_H_
#include "boy.h"
#include "girl.h"
#include <iostream>
#include <vector>
class make_rel{
	public:
		//friend keyword to make function usable by all classes
		friend void makeRel(std::vector<boy> &b, std::vector<girl> &g); //!friendly function so that can be used in other classes if not used gives function not declared error in other classes
};
void makeRel(std::vector<boy> &b, std::vector<girl> &g);
#endif
