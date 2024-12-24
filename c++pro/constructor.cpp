//생성자.
#include <iostream>

class Date {
private:
	int year_;
	int month_;
	int day_;

public:
	void SetDate(int year, int month, int date);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	int GetCurrentMonthTotalDays(int year, int month);

	void show();

	Date(int year, int month, int day)		//생성자.
	{
		year_ = year;
		month_ = month;
		day_ = day;
	}

};

int main() {
	Date day(2011, 3, 1);	//인스턴스로 day를 생성함과 동시에 Date함수를 부르지 않았지만 객체 생성시 자동으로 호출되는 함수
  //Date day(2011,3,1); 암시적 방법
  //Date day = Date(2012,3,1); 명시적 방법.


}
