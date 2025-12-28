#include "stdafx.h"
#include "MyStringEx.h"

int main()
{
	CMyStringEx strTest;
	
	//문자열 필터링
	strTest.SetString("멍멍이아들");
	cout << strTest << endl;

	strTest.SetString("나는 착한 사람");
	cout << strTest << endl;
}