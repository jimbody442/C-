#include <iostream>
#include "MyString.h"
#include  "stdafx.h"

void TestFunction(const CMyString& strParam) //const 클래스 참조자 매개변수로 받기, 따라서 복사 생성자가 호출되지 않고 원본 객체를 가리키며 const객체이므로 const멤버 함수만 호출 가능.
{
	cout << strParam[0] << endl;

	cout << strParam[strParam.GetLength() - 1] << endl; //NULL문자 전 마지막 문자 출력
}

int main()
{
	CMyString strParam("Hello World");
	cout << strParam << endl;
	TestFunction(strParam);
}