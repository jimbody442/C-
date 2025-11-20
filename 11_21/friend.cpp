#include <iostream>
using namespace std;

// 친구 함수 (friend function)
// 클래스의 비공개 멤버에 접근할 수 있는 함수
// 클래스 외부에 정의되지만 클래스의 멤버처럼 동작
// 클래스 선언 내에서 friend 키워드를 사용하여 선언
// 친구 함수는 클래스의 모든 멤버에 접근할 수 있음
// 주로 연산자 오버로딩이나 특정 기능을 구현할 때 사용
// 친구 함수는 클래스의 멤버 함수가 아니므로 객체를 통해 호출되지 않음
class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int, int);
	void addhours(int);
	void addminutes(int);
	Time sum(Time&);
	Time operator +(Time&);
	Time operator *(int); //멤버 함수로 선언
	void show();
	friend Time operator*(int n, Time& t) // private에 직접적으로 접근하지는 않지만friend로 선언하는것이 일반적
	{
		return t * n; //멤버 함수 호출
	}
	~Time();
};

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
	cout << "시간 : " << hours << "\n" << " 분 : " << minutes << endl;
}

Time Time::operator *(int n)
{
	Time result;
	long resultMin = (this->hours * n * 60) + (this->minutes * n);
	result.hours = resultMin / 60;
	result.minutes = resultMin % 60;
	return result;
}

Time::~Time()
{
}

int main()
{


	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1; //friend 함수 호출
	//t2 = operator *(3, t1); //동일한 결과
}