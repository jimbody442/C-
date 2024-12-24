#include <iostream>

class Date {
    int year_;
    int month_;  // 1 부터 12 까지.
    int day_;    // 1 부터 31 까지.

public:
    void ShowDate();

    Date() {                    //매개변수가 없을 경우 실행되는 생성자.
        std::cout << "기본 생성자 호출!" << std::endl;
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }

    Date(int year, int month, int day) {        // 매개변수가 3개가 지정되었을때 실행되는 생성자/
        std::cout << "인자 3 개인 생성자 호출!" << std::endl;
        year_ = year;
        month_ = month;
        day_ = day;
    }
    
    Date(int year){     //매개변수가 "년"으로 한개만 주어졌을때 보내게 되는 생성자.
        year_ = year;
        month_ = 5;
        day_ = 19;
    }
};

void Date::ShowDate() {
    std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
        << " 일 입니다 " << std::endl;
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