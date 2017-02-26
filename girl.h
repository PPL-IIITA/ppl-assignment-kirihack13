#ifndef GIRL_H_
#define GIRL_H_
#include <string>
class girl{
	private:
		std::string name;//!girlname
		int attractiveness;//!girl attractiveness
		int intelligence;//!girl intelligence
		bool is_commited;//!girl commited status
		int type;//!girl type '1' = choosy '2' = normal '3' = desperate
		int pref;//!girl preference '1' = most rich '2' = most attractive '3' = most intelligent
	public:
		int maintenance_budget;
		girl(std::string, int, int, bool, int, int, int);//!constructor
		void setName(std::string);
		void setAttractiveness(int);
		void setIntelligence(int);
		void setIs_commited(bool);
		void setBoyname(std::string);
		void setType(int);
		void setPreference(int);
		void setBudget(int);
		std::string getName(void);
		int getAttractiveness(void);
		int getIntelligence(void);
		int getIs_commited(void);
		int getType(void);
		int getPreference(void);
		int getBudget(void);
		
};
#endif
