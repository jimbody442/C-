#include <iostream>
using namespace std;

//r-value 참조자
//일반 참조자와 달리 임시 객체를 참조할 수 있다.
// && 기호를 사용

int main()
{
	int&& data = 3 + 4; //r-value 참조자 선언 및 초기화
	cout << "rvalue: " << data<< endl;
	data++;
	cout << "rvalue after ++: " << data << endl;

	return 0;
}

//함수 매개변수의 형식이 클래스면 무조건 참조 형식으로	선언하는 것이 좋다.
//r-value는 연산의 결과나 임시 객체를 의미
/*
void TestFunc(CTest& param)
{
	cout << 매개변수	참조자 호출" << endl;
}

void TestFunc(CTest&& param)
{
	cout << "TestFunc() r-value 참조자 호출" << endl;
}

int main()
{
	TestFunc(3+4); //r-value 참조자 호출 (x+3), (3+4)등 과 같은 임시 객체
}

*/

/* 
주의사항
//모호성 발생
	TestFunc(3+4) 호출 시

	함수가
	TestFunc(int param)
	TestFunc(int&& param)
	두 개가 있으면 모호성이 발생하여 컴파일 오류
*/