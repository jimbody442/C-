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