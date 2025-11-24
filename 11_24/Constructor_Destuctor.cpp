#include <iostream>
using namespace std;

class Test
{
public:
	Test() // 디	폴트	생성자
	{
		cout << "Test::Test() 호출" << endl;
	}
	~Test() // 소멸자
	{
		cout << "Test::~Test() 호출" << endl;
	}

};


int main()
{
	//생성자, 소멸자
	//클래스 객체가 생성 및 소멸될 때 자동으로 호출되는 함수
	//함수임에도 불구하고 반환형이 없음.
	//생성자는 다중정의 가능, 소멸자는 다중정의 불가능
	//디폴트 생성자(default constructor) : 매개변수가 없는 생성자
	cout << "시작" << endl;
	Test t; // 객체 생성 -> 디폴트 생성자 호출
	cout << "종료" << endl;
	return 0;
}

//main의 지역 변수로 생성된 클래스 객체 t가 main 함수 종료 시점에 소멸됨
// ~Test::~Test() 호출

//* 전역 변수로 생성된 클래스 객체는 main함수보다 먼저 호출.
