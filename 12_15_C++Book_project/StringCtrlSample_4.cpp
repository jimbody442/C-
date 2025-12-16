//StringCtrlSample.cpp : 콘솔 이용 프로그램에 대한 진입점을 정의

#include "stdafx.h"
#include "MyString.h"

void TestFunc(const CMyString& strParam)
{

	cout << strParam << endl;

}

int main()
{
	CMyString strData("Hello");

	::TestFunc(strData);
	::TestFunc(CMyString("World")); // 이름없는 객체로 함수의 매개변수로 전달.
}