//문자열 검열을 위한 코드 SetString()작성
//main에서 생성한 객체는 CMyStringEx 클래스 객체
//SetString을 호출하면 CMyStringEx의 SetString 함수가 호출되고 함수 내부에서 CMyString의 SetString()함수를 호출.

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
		return pszResult - GetString();
	}
	else
		return -1;
}

int CMyStringEx::SetString(const char* pszParam)
{
	int nRes;

	if (strcmp(pszParam, "멍멍이아들") == 0)
	{
		nRes = CMyString::SetString("착한사람");
	}
	else
	{
		nRes = CMyString::SetString(pszParam);
	}

	return nRes;

}
