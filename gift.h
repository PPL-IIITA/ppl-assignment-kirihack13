#ifndef GIFT_H_
#define GIFT_H_
#include <string>
class gift{
	private:
    		int value;
    		double price;
    		int type;
    		int lux_rat, difficulty;
    		int util_val;
		float util_class;
	    	int alc; //!var to check if gift is allocated
	public:
	    	gift(int ,double);//!constructor essential gift
		gift(int , double, int, int);//!constructor luxury gift
	    	gift(int, double, int, float);//!constructor utility gift
    		int getValue(void);
    		double getPrice(void);
    		int getLux_rat(void);
	    	int getDifficulty(void);
	    	int getType(void);
		int getUtil_val(void);
	    	float getUtil_class(void);
	    	int getAlc(void);
	    	void setAlc(void);
};
#endif
