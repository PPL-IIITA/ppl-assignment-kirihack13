#ifndef GIRL_H_
#define GIRL_H_
#include <string>
class girl{
	private:
		std::string name;
		int attractiveness;
		int intelligence;
		bool is_commited;
		double happiness;
		int type;
		int pref;
	public:
		int maintenance_budget;
		girl(std::string, int, int, bool, int, int, int);
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
