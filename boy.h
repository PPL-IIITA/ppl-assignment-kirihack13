#ifndef BOY_H_
#define BOY_H_
#include <string>
class boy{
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		int min_attract;
		bool is_commited;
		//double happiness;
		//std::string girlname;
		int type;
	public:
		int budget;
		/*int spent;
		int gifts;
		int lux_gift;*/
		boy(std::string , int, int, int, bool, int, int);
		void setName(std::string);
		void setAttractiveness(int);
		void setIntelligence(int);
		void setIs_commited(bool);
		//void setGirlname(std::string);
		void setType(int);
		void setMin_attract(int);
		void setBudget(int);
		/*void setSpent(int);
		void setGifts(int );
		//void setHappiness(double);
		void setLux_gift(int);*/
		std::string getName(void);
		int getAttractiveness(void);
		int getIntelligence(void);
		int getMin_attract(void);
		int getIs_commited(void);
		//std::string getGirlname(void);
		int getType(void);
		int getBudget(void);
		/*int getSpent(void);
		//double getHappiness(void);
		int getGifts(void);
		int getLux_gift(void);*/
};
#endif
