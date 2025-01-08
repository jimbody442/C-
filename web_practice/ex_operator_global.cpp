//�����Լ��� ������ �Լ��� ���� �Ҷ��� ����Ʈ �Լ�!!!

#include <iostream>
using namespace std;

class Position
{
	double x_;
	double y_;

public:
	Position(double x, double y); //������ ����.
	void Display();
	friend Position operator-(const Position& pos1, const Position& pos2); //������ �Լ�
};

int main()
{
	Position pos1(3.3, 12.5);
	//Position pos1 =Position(3.3,12.5);
	Position pos2 = Position(-14.4, 7.8);
	Position pos3 = pos1 - pos2;

	pos3.Display();
	return 0;
}

Position::Position(double x, double y)	//������ ����.
{
	x_ = x;
	y_ = y;

}
Position operator-(const Position& pos1, const Position& pos2)
{
	return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);
}

void Position::Display()
{
	cout << "�� ������ �߰� ������ ��ǥ�� x��ǥ��" << this->x_ << "�̰�, y��ǥ��"
		<< this->y_ << "�Դϴ�" << endl;
}

//���� �����ڸ� ���� ������ �Լ��� ����Ͽ� �����ε�.
//������ �����Լ��� private����� x_�� y_�� �������� ���ϹǷ�, friend Ű���带 ����Ͽ�
//������ �Լ��� ����.
