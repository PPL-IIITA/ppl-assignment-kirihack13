#ifndef MAKE_REL_H_
#define MAKE_REL_H_
#include "boy.h"
#include "girl.h"
#include <iostream>
#include <vector>
class make_rel{
	public:
		friend void makeRel(std::vector<boy> &b, std::vector<girl> &g);
};
void makeRel(std::vector<boy> &b, std::vector<girl> &g);
#endif
