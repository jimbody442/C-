#include <iostream>
#include <string>
using namespace std;
class Date {
private:
	int year_;
	int month_;
	int day_;

public:
	void SetDate(int year, int month, int date)
	{
		year_ = year;
		month_ = month;
		day_ = date;
	}
	void AddDay(int inc)
	{
		day_ += inc;
		month_ += day_ / 29;
		day_ = day_ % 29;

	}
	void AddMonth(int inc)
	{
		month_ += inc;
		year_+= month_ /12;
		if (month_ == 12)
		{
			month_ = (month_ % 12)+1;
		}
		else
		month_ = month_ % 12;
	}
	void AddYear(int inc)
	{
		year_ += inc;
	}
	void showDate()
	{
		cout << year_ << "³â" << month_ << "¿ù" << day_ << "ÀÏ"<<endl;
	}


};
int main() {

	Date Mydate;
	Mydate.SetDate(2012, 2, 28);
	Mydate.AddDay(3);
	Mydate.showDate();
	Mydate.AddMonth(9);
	Mydate.showDate();
	Mydate.AddYear(11);
	Mydate.showDate();



}
