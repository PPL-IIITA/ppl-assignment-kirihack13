#ifndef GIVE_GIFT_H_
#define GIVE_GIFT_H_
#include "gift.h"
#include "rel.h"
#include <vector>
class give_gift{
	public:
		//friend keyword to make function usable by other classes
		friend void giveGift(std::vector<gift> &g, std::vector<rel> &r); // friendly function so it can be accesed outside the class if not used gives function not declared error in other classes
};
void giveGift(std::vector<gift> &g, std::vector<rel> &r);
#endif
