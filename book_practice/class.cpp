//클래스를 쉽게 생각을하면 함수를 포함 할 수 있는 구조체.
//>>당장의 의미는 이렇게 이해하기<<

//클래스의 문법.
//class 클래스 이름
//{
//접근제어 지시자:
//	멤버변수선언;
//	멤버함수선언 및 정의;
//};

//-  구조체를 선언하는 것과 다른 점은 '접근 제어 지시자' 가 있는 것.

#include <cstdio>

//제작자 코드
class USERDATA
{
public:
	//멤버 변수 선언
	int Age;
	char Name[20];

	//멤버 함수 선언 및 정의
	void Print(void)
	{
		//Age와 Name은 Print()함수의 지역 변수가 아니다.
		printf("%d, %s\n", Age, Name);
	}
};

//사용자 코드
int main()
{
	USERDATA user = { 10, "BAEK" };

	user.Print();

	return 0;
}