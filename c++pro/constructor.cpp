//������.
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

	Date(int year, int month, int day)		//������.
	{
		year_ = year;
		month_ = month;
		day_ = day;
	}

};

int main() {
	Date day(2011, 3, 1);	//�ν��Ͻ��� day�� �����԰� ���ÿ� Date�Լ��� �θ��� �ʾ����� ��ü ������ �ڵ����� ȣ��Ǵ� �Լ�
  //Date day(2011,3,1); �Ͻ��� ���
  //Date day = Date(2012,3,1); ����� ���.


}
