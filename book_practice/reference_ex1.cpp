#include <iostream>
using namespace std;

void  TestFunc(int& rParam);

int main()
{
	int nData = 0;

	//참조에 의한 인수 전달
	TestFunc(nData);

	cout << nData << endl;
}

//매개변수가 int에 대한 참조 형식
void TestFunc(int& rparam)
{
	//피호출자 함수에서 원본의 값을 변경
	rparam = 100;
}

//함수의 매개변수가 참조자인 경우 가장 큰 문제점은 호출자 코드만 봐서는 매개변수가 참조 형식이라는 사실을 전혀 알 수 없다.

// !!!!!!!!!!!!!!!!!!!!!!  c++에서는 호출자 코드만 보고 함수의 원형을 확신해서는 안된다!!!!!!!!!!!!!!!!!!!!!!
