#include <iostream>
#include "MyString.h"
#include  "stdafx.h"


int main()
{
	CMyString strLeft("Hello"), strRight("World");

	cout << "비교연산자 테스트 == 일때" << endl;
	if (strLeft == strRight)
	{
		cout << "strLeft와 strRight는 같습니다." << endl;
	}
	else
	{
		cout << "strLeft와 strRight는 다릅니다." << endl;
	}

	strLeft = CMyString("World"); // 임시객체 생성 및 대입 연산자 호출ㄴ

	cout << "비교 연산자 테스트 != 일때" << endl;
	if (strLeft != strRight)
	{
		cout << "strLeft와 strRight는 다릅니다." << endl;
	}
	else
	{
		cout << "strLeft와 strRight는 같습니다." << endl;
	}
	return 0;
}