#include "girl_Q3.h"
//#include "homosapien.cpp"
#include <string>
girl_Q3::girl_Q3(std::string name, int attractiveness, int intelligence, int pref, bool isCommited, int type, int budget):homosapien(name, attractiveness, intelligence, isCommited, type, budget){
	this->pref = pref;
}
void girl_Q3::setPreference(int pref){
	this->pref = pref;
}
int girl_Q3::getPreference(void){
	return this->pref;
}
