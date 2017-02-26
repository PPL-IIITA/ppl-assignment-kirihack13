#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	ifstream input;
    ofstream output;
    int a, b, c, d ,e ,f;
	srand(time(NULL));
    input.open("bnames.txt");
    output.open("blist.csv");
	for(int i = 0; i < 1000; i++){
		string name;
		a = rand()%100 + 1;
		b = rand()%10 + 1;
		c = rand()%100 + 1;
		d = rand()%3 + 1;
		e = rand()%5000 + 10000;
    	input >> name;
    	output << name <<" , "<< a <<" , " << b <<" , "<< c << " , false , " << d << " , " << e  << endl;
	}
    input.close();
    output.close();
    input.open("gnames.txt");
    output.open("glist.csv");
	for(int i = 0; i < 1000; i++){
		string name;
		a = rand()%100 + 1;
		b = rand()%10 + 1;
		c = rand()%3 + 1;
		d = rand()%3 + 1;
		e = rand()%5000 + 10000;
    	input >> name;
    	output << name << " , " << a << " , " << b << " , false , " << c << " , " << d << " , " << e  << endl;
	}
	input.close();
	output.close();
    output.open("egift.csv");
	for(int i = 0; i < 5000; i++){
		a = rand()%8 + 1;
		e = rand()%1000 + 300;
    	output << a << " , " << e << endl;
	}
	output.close();
	output.open("ugift.csv");
	for(int i = 0; i < 2000; i++){
		a = rand()%8 + 1;
		b = rand()%10 + 1;
		c = rand()%5 + 1;
		e = rand()%3000 + 400;
    	output << a << " , " << e << " , " << b << " , " << c << endl;
	}  
	output.close();
	output.open("lgift.csv");
	for(int i = 0; i < 1000; i++){
		a = rand()%2 + 8;
		b = rand()%5 + 1;
		c = rand()%10 + 1;
		e = rand()%3000 + 3500;
    	output << a << " , " << e << " , " << b << " , " << c << endl;
	}     
	output.close();
    return 0;
}
