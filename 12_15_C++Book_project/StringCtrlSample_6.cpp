//StringCtrlSample.cpp : 콘솔 이용 프로그램에 대한 진입점을 정의

#include "stdafx.h"
#include "MyString.h"



int main()
{
	CMyString strLeft("Hello"), strRight("World"), strResult;

	strResult = strLeft + strRight; //새로 정의한 대입연산자 함수 호출
	cout <<"strLeft + strRight = " << strResult << endl; //정의한 operator(char*)const 호출

	strLeft+=CMyString("World");
	cout << "strLeft + CMyString(World) = " << strLeft << endl;

}