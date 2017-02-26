#include "gift.h"
#include <string>
gift::gift(int value,double price){
//!constructor essential gift
    this->value = value;
    this->price = price;
    this->type = 1;
    this->lux_rat = 0;
    this->difficulty = 0;
    this->util_val = 0;
    this->util_class = 0;
    this->alc = 0;
}
gift::gift(int value,double price, int lux_rat, int difficulty){
//!constructor luxury gift
    	this->value = value;
    	this->price = price;
	this->lux_rat = lux_rat;
	this->difficulty = difficulty;
	this->type = 3;
	this->util_val = 0;
	this->util_class = 0;
	this->alc = 0;
}
gift::gift(int value, double price, int util_val, float util_class){
//!constructor utility gift	
	this->value = value;
	this->price = price;
	this->util_val = util_val;
	this->util_class = util_class;
	this->type = 2;
	this->lux_rat = 0;
	this->difficulty = 0;
	this->alc = 0;
}
int gift::getValue(void){
    return this->value;
}
double gift::getPrice(void){
    return this->price;
}
int gift::getLux_rat(void){
	return this->lux_rat;
}
int gift::getDifficulty(void){
	return this->difficulty;
}
int gift::getType(void){
	return this->type;
}
int gift::getUtil_val(void){
	return this->util_val;
}
float gift::getUtil_class(void){
	return this->util_class;
}
int gift::getAlc(void){
	return this->alc;
}
void gift::setAlc(){
	this->alc = 1;
}
