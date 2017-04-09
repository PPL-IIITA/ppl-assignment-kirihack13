#ifndef GIRL_Q3_H_
#define GIRL_Q3_H_
#include <string>
#include "homosapien.h"
class girl_Q3 : public homosapien{
	private:
		int pref;//!girl preference '1' = most rich '2' = most attractive '3' = most intelligent
	public:
		girl_Q3(std::string,int,int,int,bool,int,int);//!constructor
		void setPreference(int);
		int getPreference(void);
};
#endif
