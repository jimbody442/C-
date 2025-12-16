//StringCtrlSample.cpp : 콘솔 이용 프로그램에 대한 진입점을 정의

#include "stdafx.h"
#include "MyString.h"

CMyString TestFunc(void)
{
	CMyString strTest("TestFunc() return");
	cout << strTest << endl;

	return std::move(strTest);
}

int main()
{
	cout << "******begine*****" << endl;
	 CMyString ab = TestFunc();
	 

	cout << "*****end******" << endl;
	return 0;
}