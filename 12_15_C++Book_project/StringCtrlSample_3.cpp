//StringCtrlSample.cpp : 콘솔 이용 프로그램에 대한 진입점을 정의

#include "stdafx.h"
#include "MyString.h"

int main()
{
	const char* p;
	const char* p1;
	CMyString strData, strTest;
	cout << "전달된 문자열의 길이는 :" << strData.SetString("Hello") << endl;;
	cout <<"전달된 문자열의 길이는 :" << strTest.SetString("World") << endl;

	//복사 생성
	CMyString strNewData(strData);
	p = strNewData.GetString(); //새로운 객체인 strNewData에 strData의 값을 넣어 출력
	cout << p << endl;

	//단순 대입 연산자 호출
	strNewData = strTest;
	p1 = strNewData.GetString(); //전의 값을 Release함수를 호출하여 초기화 후 새로운 값을 넣어 World 출력
	cout << p1 << endl;
}