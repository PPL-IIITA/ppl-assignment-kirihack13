#include "girl.h"
#include <string>
girl::girl(std::string name, int attractiveness, int intelligence, bool is_commited, int type, int pref, int maintenance_budget){
//!constructor	
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->is_commited = is_commited;
	this->type = type;
	this->pref = pref;
	this->maintenance_budget = maintenance_budget;
}
void girl::setName(std::string name){
	this->name = name;
}
void girl::setAttractiveness(int attractiveness){
	this->attractiveness = attractiveness;
}
void girl::setIntelligence(int intelligence){
	this->intelligence = intelligence;
}
void girl::setIs_commited(bool is_commited){
	this->is_commited = is_commited;
}
void girl::setType(int type){
	this->type = type;
}
void girl::setPreference(int pref){
	this->pref = pref;
}
void girl::setBudget(int maintenance_budget){
	this->maintenance_budget = maintenance_budget;
}
std::string girl::getName(void){
	return this->name;
}
int girl::getAttractiveness(void){
	return this->attractiveness;
}
int girl::getIntelligence(void){
	return this->intelligence;
}
int girl::getIs_commited(void){
	return this->is_commited;
}
int girl::getType(void){
	return this->type;
}
int girl::getPreference(void){
	return this->pref;
}
int girl::getBudget(void){
	return this->maintenance_budget;
}
