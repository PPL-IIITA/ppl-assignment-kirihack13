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
	    int alc;
	public:
	    gift(int ,double);
		gift(int , double, int, int);
	    gift(int, double, int, float);
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
