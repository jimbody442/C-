//클래스의 기본 문법
//클래스를 쉽게 설명하면 함수를 포함하는 구조체라고 할 수 있다.

//클래스가 구조체와 다른점은 접근 제어 지시자를 사용할 수 있다는 것이다.

#include <cstdio>
#include <iostream>

//제작자 코드
class USERDATA
{
public:
	//멤버 변수 선언
	int nAge;
	char szName[32];

	//멤버 함수 선언 및 정의
	void Print(void)
	{
		//nAge와 szName은 Print()함수의 지역 변수가 아니다.
	}
};

//사용자 코드
int main()
{
	USERDATA user = {10, "철수"};
	user.Print();
}

//public은 접근 제어 지시자이다.
//public지시자를 사용하면 기본적으로 구조체를 사용하는 것과 같은 개념.
//사용자 코드에서 . 혹은 -> 와 같은 멤버 접근 연산자를 이용하여 구초제 내부 멤버에 접근할 수 있다.
