//객체의 private 멤버에는 해당 객체의 public멤버 함수를 통해 접근.
//하지만 경우에 따라 해당 객체의 멤버함수가 아닌 함수도 private멤버에 접근 해야 할 경우 발생

//priavte멤버에 접근하기 위해 새로운 public멤버 함수를 작성하는 것은 비효율적.
//따라서!!! 이러한 경우를 위해 friend라는 접근제어 키워드 제공

//프렌드는 지정한 대상에 한해 해당 객체의 모든 멤버에 접근할 수 있는 권한 부여.
//이러한 friend는 전역 함수, 클래스, 멤버함수의 세가지 형태로 사용가능.

//함수 선언 
//friend 클래스이름 함수이름(매개변수목록);
// ------선언된 프렌트 함수는 클래스 선언부에 그 원형이 포함되지만 클래스의 멤버함수 x
// 클래스의 멤버함수는 아니지만 ,멤버함수와 같은 권한을 가짐.
//************public,privae,proteted영역 어디든 위치할 수 있으며, 위치에 따른 차이 x


#include <iostream>
using namespace std;

class Rect
{
	double height_;
	double width_;
public:
	Rect(double height, double width); //생성자.
	void DisplaySize();
	Rect operator*(double mul) const;
};

int main(void)
{
	Rect origin_rect(10, 20);
	Rect changed_rect = origin_rect * 2;
	//Rect changed_rect 2 * origin_rect;
}

void Rect::DisplaySize()
{
	cout << "이 사각형의 높이는" << this->height_ << "이고, 너비는" << this->width_ << "입니다" << endl;


}

Rect Rect::operator*(double mul)const
{
	return Rect(height_ * mul, width_ * mul);
}

//위의 operator*()함수에서 주석 처리된 구문처럼 피연산자의 순서를 바꾸어 실행은 오류를 발생

//이유는 멤버 함수란 왼쪽 피연산자인 객체가 호출하는 형태가 되어야 하기 때문.