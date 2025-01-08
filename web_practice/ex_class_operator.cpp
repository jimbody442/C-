//연산자 오버로딩
//함수 오버로딩이란 같은 일을 처리하는 함수를 매개변수의 형식을 조금씩 달리하여 ,하나의 이름으로
//작성할 수 있게 해주는 것.

//하나의 연산자를 여러 의미로 사용 할 수 있게 함.
// 연산자 오버로딩을 사용자 정의 타입까지 확장

//연산자 함수(operator function)
//연산자를 오버로딩 하기 위해서는 연산자 함수라는 것을 사용

//연산자 함수의 문법

//operator오버로딩할연산자(매개변수목록)

#include <iostream>
using namespace std;

class Position
{
	double x_;
	double y_;

public:
	Position(double x, double y); //생성자 선언.
	void Display();
	Position operator-(const Position& other); //연산자 함수
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
Position Position::operator-(const Position& other)
{
	return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);
}

void Position::Display()
{
	cout << "두 지점의 중간 지점의 좌표는 x좌표가" << this->x_ << "이고, y좌표가"
		<< this->y_ << "입니다" << endl;
}


//뺄셈 연산자(-)를 두 Position 객체 사이의 중간 좌표를 구하는 연산으로 오버로딩하여 사용

//연산자 함수의 정의 방법 2가지
//1. 클래스의 멤버 함수로 정의하는 방법
//2. 전역 함수로 정의하는 방법.

// ---두 방법의 차이는 인수의 개수뿐만 아니라 private멤버의 접근 여부.
// 전역함수로 정의할 경우, private 멤버에 대한 접근을 위해 프렌드 함수를 사용