// 프렌트 클래스 
// 프렌트는 전역함수 ,클래스 ,멤버함수 의 세가지 형태로 사용

//  두 클래스가 기능상으로 서로 밀접한 관계? ,상대방의 private 멤버에 접근해야 한다면 
// 클래스 자체를 프렌드로 선언하는 것이 좋음.

//프렌트 클래스 선언
//friend class 클래스이름;

//이번 예제는 Display 클래스의 모든 멤버 함수가 Rect 클래스의 모든 멤버에 접근할 수 있도록
//선언한 예제.

#include <iostream>
#include <cmath>

using namespace std;

class Rect
{
private:
	double height_;
	double width_;

public:
	Rect(double height, double width);
	void height() const;
	void width() const;
	friend class Display; //프레드 클래스 선언
};

class Display
{
public:
	void ShowSize(const Rect& target);
	void ShowDiagoanl(const Rect& target);
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

//프렌드 멤버함수

//showDiagonal()함수는 Rect클래스의 private멤버에 직접 접근하도록 구현
//하지만 showSize()함수는 Rect클래스의 public 인터페이스만 구현

//이처럼  프렌트 멤버 함수란 해당클래스의 특정 멤버 함수만을 프렌드로 지정.
// 필요한 함수에 대해서 접근을 허락하므로, 정보은닉 및 캡슐화 개념에 더욱 가깝게 구현.
