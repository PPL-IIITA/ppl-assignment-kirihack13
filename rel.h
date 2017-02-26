#ifndef REL_H_
#define REL_H_
#include <string>
class rel{
	private:
		double happiness;
		int compatibility;
		std::string bname;
		std::string gname;
	public:
		rel(std::string, std::string, double, int);
		std::string getBname(void);
        std::string getGname(void);
        double getHappiness(void);
        int getCompatibility(void);
};
#endif
