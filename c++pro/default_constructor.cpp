#include <iostream>

class Date {
    int year_;
    int month_;  // 1 ���� 12 ����.
    int day_;    // 1 ���� 31 ����.

public:
    void ShowDate();

    Date() {
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }
};

void Date::ShowDate() {
    std::cout << "������" << year_ << "��" << month_ << "��" << day_ << "�� �Դϴ�" << std::endl;

}

int main() {

    Date day = Date(); //�ƹ� �Էµ� ���� �ʴ´ٸ� default �� �⺻���� ȣ��Ǿ� �Էµǰ� �ȴ�.
    Date day2;          // ���������� �Ͻ��� ������� �Ű������� �����Ƿ� �⺻������ �Է�.

    day.ShowDate();
    day2.ShowDate();

    return 0;
}