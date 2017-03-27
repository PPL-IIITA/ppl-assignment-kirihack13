#ifndef HOMOSAPIEN_H_
#define HOMOSAPIEN_H_
#include <string>
class homosapien{
	private:
		std::string name; //!human name
		int attractiveness; //!human attractiveness
		int intelligence; //!human intelligence
		bool is_commited; //!boy commited status
		int type;  
	public:
		int budget; //!boy budget
		homosapien(std::string , int, int, bool, int, int); //!constructor
		void setName(std::string); 
		void setAttractiveness(int);
		void setIntelligence(int);
		void setIs_commited(bool);
		void setType(int);
		void setBudget(int);
		std::string getName(void);
		int getAttractiveness(void);
		int getIntelligence(void);
		int getIs_commited(void);
		int getType(void);
		int getBudget(void);
};
#endif