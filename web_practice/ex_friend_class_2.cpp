//Display클래스의 ShowDiagonal() 함수만이 Rect 클래스의 모든 멤버함수에 접근할 수 있도록 선언
#include <iostream>
#include <cmath>

using namespace std;

class Rect;

class Display
{
public:
	void ShowSize(const Rect& target);
	void ShowDiagoanl(const Rect& target);
};

// Rect클래스 내에서 ShowDiagonal()함수가 프렌드로 선언된 것을 처리하기 전에
// 컴파일러는 이미 ShowDiagonal()함수의 선언을 알고 있어야함.!!!!
//따라서 순서를 바꾸게 되면 컴파일러는 프렌드로 선언된 ShowDiagonal()함수를 알지못하므로.

//오류 발생!!!!!

class Rect
{
private:
	double height_;
	double width_;

public:
	Rect(double height, double width);
	void height() const;
	void width() const;
	friend void Display::ShowDiagoanl(const Rect& target); //프레드 멤버함수 선언
};


int main()
{
	Rect rec01(10, 20);
	Display rect_display;
	rect_display.ShowSize(rec01);
	rect_display.ShowDiagoanl(rec01);

	return 0;

}

Rect::Rect(double height, double width)
{
	height_ = height;
	width_ = width;
}

void Rect::height()const
{
	cout << "이 사격형의 높이는" << this->height_ << "입니다" << endl;
}
void Rect::width() const
{
	cout << "이 사각형의 너비는" << this->width_ << "입니다" << endl;
}

void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}

void Display::ShowDiagoanl(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));

	cout << "이 사각형의 대각선의 길이는" << diagonal << "입니다" << endl;
}






//**이번예제를 통해 알 수 있는 점
// Rect 클래스를 전방 선언 한 후
// Display 클래스를의 멤버 함수를 선언하여 컴파일러가 showDiagonal()함수 선언을 알고 있게
//한 후 Rect 클래스의 멤버함수에서 프렌드 함수를 정의하여 컴파일러가 미리 알고 있게 해야한다.