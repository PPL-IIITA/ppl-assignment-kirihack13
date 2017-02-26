#ifndef BOY_H_
#define BOY_H_
#include <string>
class boy{
	private:
		std::string name; //!boy name
		int attractiveness; //!boy attractiveness
		int intelligence; //!boy intelligence
		int min_attract; //!boy minimum attractiveness
		bool is_commited; //!boy commited status
		int type; //!boy type '1' = miser '2' = generous '3' = geek  
	public:
		int budget; //!boy budget
		boy(std::string , int, int, int, bool, int, int); //!constructor
		void setName(std::string); 
		void setAttractiveness(int);
		void setIntelligence(int);
		void setIs_commited(bool);
		void setType(int);
		void setMin_attract(int);
		void setBudget(int);
		std::string getName(void);
		int getAttractiveness(void);
		int getIntelligence(void);
		int getMin_attract(void);
		int getIs_commited(void);
		int getType(void);
		int getBudget(void);
};
#endif
