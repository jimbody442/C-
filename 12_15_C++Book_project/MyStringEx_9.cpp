//strstr함수를 사용
//strstr(찾으려고하는 문자열, 찾고자하는 문자열)
#include "stdafx.h"
#include "MyStringEx.h"

CMyStringEx::CMyStringEx()
{
	cout << "CMyStringEx의 생성자가 호출되었습니다." << endl;
}
CMyStringEx::~CMyStringEx()
{
	cout << "CMyStringEx의 소멸자가 호출되었습니다." << endl;
}

int CMyStringEx::Find(const char* pszParam)
{
	if (pszParam == NULL || GetString() == NULL)
	{
		return -1;
	}

	const char* pszResult = strstr(GetString(), pszParam);

	if (pszResult != NULL)
	{
		return pszResult - GetString() ;
	}
	else
		return -1;

}
