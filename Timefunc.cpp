#include "timeoverloading.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::addhours(int h)
{
	hours += h;
}
void Time::addminutes(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

Time Time::sum(Time& t)
{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours;
	sum.hours += sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator+(Time& t)
{
	Time sum;
	sum.minutes = this->minutes + t.minutes;
	sum.hours = this->hours + t.hours;
	sum.hours += sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
void Time::show()
{
	cout << "½Ã°£ : " << hours << "\n" << " ºĞ : " << minutes << endl;
}

Time::~Time()
{
}