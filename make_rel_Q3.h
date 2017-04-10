#ifndef MAKE_REL_Q3_H_
#define MAKE_REL_Q3_H_
#include "boy_Q3.h"
#include "girl_Q3.h"
#include <iostream>
#include <vector>
class make_rel_Q3{
	public:
		//!friend keyword to make function usable by all classes
		friend void makeRelQ3(std::vector<boy_Q3> &b, std::vector<girl_Q3> &g); //!friendly function so that can be used in other classes if not used gives function not declared error in other classes
};
void makeRelQ3(std::vector<boy_Q3> &b, std::vector<girl_Q3> &g);
#endif
