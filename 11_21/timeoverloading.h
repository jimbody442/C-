#include <iostream>

#ifndef TIME_H
#define TIME_H
using namespace std;
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int, int);
	~Time();
	void addhours(int);
	void addminutes(int);
	Time sum(Time&);
	Time operator +(Time&);
	void show();

};



#endif
