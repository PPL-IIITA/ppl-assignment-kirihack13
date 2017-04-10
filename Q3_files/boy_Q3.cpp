#include "boy_Q3.h"
#include <string>
boy_Q3::boy_Q3(std:string name,int attractiveness,int intelligence, int min_attract, bool isCommited, int type, int budget):homosapien(name, attractiveness, intelligence, isCommited, type, budget){
	this->min_attract = min_attract;
}
void boy_Q3::setMin_attract(int min_attrct){
	this->min_attract = min_attract;
}
int boy_Q3::getMin_attract(void){
	return this->min_attract;
}