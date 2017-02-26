#include "rel.h"
#include <string>
rel::rel(std::string bname, std::string gname, double happiness, int compatibility){
//!constructor
	this->bname = bname;
	this->gname = gname;
	this->happiness = happiness;
	this->compatibility = compatibility;
}
std::string rel::getBname(void)
{
    return this->bname;
}
std::string rel::getGname(void)
{
    return this->gname;
}
double rel::getHappiness(void)
{
    return this->happiness;
}
int rel::getCompatibility(void)
{
    return this->compatibility;
}
