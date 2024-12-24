#include <iostream>

class Date {
    int year_;
    int month_;  // 1 ���� 12 ����.
    int day_;    // 1 ���� 31 ����.

public:
    void ShowDate();

    Date() {                    //�Ű������� ���� ��� ����Ǵ� ������.
        std::cout << "�⺻ ������ ȣ��!" << std::endl;
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }

    Date(int year, int month, int day) {        // �Ű������� 3���� �����Ǿ����� ����Ǵ� ������/
        std::cout << "���� 3 ���� ������ ȣ��!" << std::endl;
        year_ = year;
        month_ = month;
        day_ = day;
    }
    
    Date(int year){     //�Ű������� "��"���� �Ѱ��� �־������� ������ �Ǵ� ������.
        year_ = year;
        month_ = 5;
        day_ = 19;
    }
};

void Date::ShowDate() {
    std::cout << "������ " << year_ << " �� " << month_ << " �� " << day_
        << " �� �Դϴ� " << std::endl;
}
int main() {
    Date day = Date();
    Date day2(2012, 10, 31);
    Date day3(2001);
    day.ShowDate();
    day2.ShowDate();
    day3.ShowDate();

    return 0;
}