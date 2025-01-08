//������ �����ε�
//�Լ� �����ε��̶� ���� ���� ó���ϴ� �Լ��� �Ű������� ������ ���ݾ� �޸��Ͽ� ,�ϳ��� �̸�����
//�ۼ��� �� �ְ� ���ִ� ��.

//�ϳ��� �����ڸ� ���� �ǹ̷� ��� �� �� �ְ� ��.
// ������ �����ε��� ����� ���� Ÿ�Ա��� Ȯ��

//������ �Լ�(operator function)
//�����ڸ� �����ε� �ϱ� ���ؼ��� ������ �Լ���� ���� ���

//������ �Լ��� ����

//operator�����ε��ҿ�����(�Ű��������)

#include <iostream>
using namespace std;

class Position
{
	double x_;
	double y_;

public:
	Position(double x, double y); //������ ����.
	void Display();
	Position operator-(const Position& other); //������ �Լ�
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
Position Position::operator-(const Position& other)
{
	return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);
}

void Position::Display()
{
	cout << "�� ������ �߰� ������ ��ǥ�� x��ǥ��" << this->x_ << "�̰�, y��ǥ��"
		<< this->y_ << "�Դϴ�" << endl;
}


//���� ������(-)�� �� Position ��ü ������ �߰� ��ǥ�� ���ϴ� �������� �����ε��Ͽ� ���

//������ �Լ��� ���� ��� 2����
//1. Ŭ������ ��� �Լ��� �����ϴ� ���
//2. ���� �Լ��� �����ϴ� ���.

// ---�� ����� ���̴� �μ��� �����Ӹ� �ƴ϶� private����� ���� ����.
// �����Լ��� ������ ���, private ����� ���� ������ ���� ������ �Լ��� ���