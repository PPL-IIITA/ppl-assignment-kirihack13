#ifndef GETGF_H_
#define GETGF_H_
#include <iostream>
#include <vector>
#include "boy.h"
class getgf{
	public:
		//friend keyword to make function usable by all classes
		 friend void getGirl(std::vector<boy> &b); //!friendly function so that can be used in other classes if not used gives function not declared error in other classes
};
void getGirl(std::vector<boy> &b);
#endif
