#ifndef GIVE_NEW_H_
#define GIVE_NEW_H_
#include "gift.h"
#include "rel.h"
#include <vector>
class give_new{
	public:
		//friend keyword to make function usable by other classes
		friend void giveAl(std::vector<gift> &ug, std::vector<gift> &eg, std::vector<gift> &lg, std::vector<rel> &r); // friendly function so it can be accesed outside the class if not used gives function not declared error in other classes
};
void giveAl(std::vector<gift> &ug, std::vector<gift> &eg, std::vector<gift> &lg, std::vector<rel> &r);
#endif
