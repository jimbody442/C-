#include <iostream>

class Date {
	int year_;
	int month_;  // 1 ���� 12 ����.
	int day_;    // 1 ���� 31 ����.

public:
	void showDate();
	
	Date() {
		std::cout << "�⺻ ������ ȣ��!" << std::endl;
		year_ = 2012;
		month_ = 7;
		day_ = 12;
	}

	Date(int year, int month, int day) {
		std::cout << "���� 3���� ������ ȣ��" << std::endl;
		year_ = year;
		month_ = month;
		day_ = day;
	}
};

void Date::showDate() {
	std::cout << "������" << year_ << "��" << month_ << "��" << day_ << "�� �Դϴ�." << std::endl;
}

int main() {
	Date day;
	Date day2(2021, 10, 31);

	day.showDate();
	day2.showDate();
}