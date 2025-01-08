//전역함수로 연산자 함수를 정의 할때는 프렌트 함수!!!

#include <iostream>
using namespace std;

class Position
{
	double x_;
	double y_;

public:
	Position(double x, double y); //생성자 선언.
	void Display();
	friend Position operator-(const Position& pos1, const Position& pos2); //연산자 함수
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

Position::Position(double x, double y)	//생성자 정의.
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
	cout << "두 지점의 중간 지점의 좌표는 x좌표가" << this->x_ << "이고, y좌표가"
		<< this->y_ << "입니다" << endl;
}

//뺄셈 연산자를 전역 연산자 함수를 사용하여 오버로딩.
//하지만 전역함수는 private멤버인 x_와 y_에 접근하지 못하므로, friend 키워드를 사용하여
//프렌드 함수로 선언.
