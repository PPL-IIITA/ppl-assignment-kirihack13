#include "boy.h"
#include <string>
boy::boy(std::string name, int attractiveness, int intelligence, int min_attract, bool is_commited, int type, int budget){
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->min_attract = min_attract;
	this->is_commited = is_commited;
	this->type = type;
	this->budget = budget;
}
void boy::setName(std::string name){
	this->name = name;
}
void boy::setAttractiveness(int attractiveness){
	this->attractiveness = attractiveness;
}
void boy::setIntelligence(int intelligence){
	this->intelligence = intelligence;
}
void boy::setIs_commited(bool is_commited){
	this->is_commited = is_commited;
}
void boy::setType(int type){
	this->type = type;
}
void boy::setMin_attract(int min_attract){
	this->min_attract = min_attract;
}
void boy::setBudget(int budget){
	this->budget = budget;
}
/*void boy::setSpent(int spent){
	this->spent = spent;
}
void boy::setGifts(int gifts){
	this->gifts = gifts;
}
void boy::setLux_gift(int lux_gift){
	this->lux_gift = lux_gift;
}*/
std::string boy::getName(void){
	return this->name;
}
int boy::getAttractiveness(void){
	return this->attractiveness;
}
int boy::getIntelligence(void){
	return this->intelligence;
}
int boy::getMin_attract(void){
	return this->min_attract;
}
int boy::getIs_commited(void){
	return this->is_commited;
}
int boy::getType(void){
	return this->type;
}
int boy::getBudget(void){
	return this->budget;
}
/*int boy::getSpent(void){
	return this->spent;
}
int boy::getGifts(void){
	return this->gifts;
}
int boy::getLux_gift(void){
	return this->lux_gift;
}*/

