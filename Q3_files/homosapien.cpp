#include "homosapien.h"
#include <string>
homosapien::homosapien(std::string name, int attractiveness, int intelligence, bool is_commited, int type, int budget){
//!constructor
	this->name = name;
	this->attractiveness = attractiveness;
	this->intelligence = intelligence;
	this->is_commited = is_commited;
	this->type = type;
	this->budget = budget;
}
void homosapien::setName(std::string name){
	this->name = name;
}
void homosapien::setAttractiveness(int attractiveness){
	this->attractiveness = attractiveness;
}
void homosapien::setIntelligence(int intelligence){
	this->intelligence = intelligence;
}
void homosapien::setIs_commited(bool is_commited){
	this->is_commited = is_commited;
}
void homosapien::setType(int type){
	this->type = type;
}
void homosapien::setBudget(int budget){
	this->budget = budget;
}
std::string homosapien::getName(void){
	return this->name;
}
int homosapien::getAttractiveness(void){
	return this->attractiveness;
}
int homosapien::getIntelligence(void){
	return this->intelligence;
}
int homosapien::getIs_commited(void){
	return this->is_commited;
}
int homosapien::getType(void){
	return this->type;
}
int homosapien::getBudget(void){
	return this->budget;
}