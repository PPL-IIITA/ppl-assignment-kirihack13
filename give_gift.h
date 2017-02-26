#ifndef GIVE_GIFT_H_
#define GIVE_GIFT_H_
#include "gift.h"
#include "rel.h"
#include <vector>
class give_gift{
	friend void giveGift(std::vector<gift> &g, std::vector<rel> &r);
};
void giveGift(std::vector<gift> &g, std::vector<rel> &r);
#endif
