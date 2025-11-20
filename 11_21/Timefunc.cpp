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
	cout << "시간 : " << hours << "\n" << "분 : " << minutes << endl;
}

std::ostream& operator <<(std::ostream& os, Time& t)
{
	os << t.hours << "시간 " << t.minutes << "분";
	return os;
}

NewTime::NewTime() : Time()
{
	day = 0;
}

NewTime::NewTime(int d, int h, int m) : Time(h, m)
{
	day = d;
}

void NewTime::show() // 파생 클래스에서 재정의
{
	cout << "일 : " << day << "\n";
	cout << "시간 : " << getHours() << "\n"; //private 멤버에 직접 접근이 불가능하므로 public 멤버 함수를 통해 접근
	cout << "분 :" << getMinutes() << endl; //private 멤버에 직접 접근이 불가능하므로 public 멤버 함수를 통해 접근
	

}
Time::~Time()
{
	cout << "Time 소멸자 호출" << endl;
}