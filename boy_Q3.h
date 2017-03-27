#ifndef BOY_Q3_H_
#define BOY_Q3_H_
#include <string>
#include "homosapien.h"
class boy_Q3 :public homosapien{
	private:
		int min_attract; //!boy minimum attractiveness  
	public:
		boy_Q3(std::string,int,int,int,bool,int,int);//:homosapien(std::string,int,int,bool,int,int); //!constructor
		void setMin_attract(int);
		int getMin_attract(void);
};
#endif