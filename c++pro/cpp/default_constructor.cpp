#include <iostream>

class Date {
    int year_;
    int month_;  // 1 부터 12 까지.
    int day_;    // 1 부터 31 까지.

public:
    void ShowDate();

    Date() {
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }
};

void Date::ShowDate() {
    std::cout << "오늘은" << year_ << "년" << month_ << "월" << day_ << "일 입니다" << std::endl;

}

int main() {

    Date day = Date(); //아무 입력도 하지 않는다면 default 즉 기본값이 호출되어 입력되게 된다.
    Date day2;          // 마찬가지로 암시적 방법으로 매개변수가 없으므로 기본값으로 입력.

    day.ShowDate();
    day2.ShowDate();

    return 0;
}
