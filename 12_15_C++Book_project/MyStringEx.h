#pragma once
#include "MyString.h"

class CMyStringEx : public CMyString
{
public:
	CMyStringEx();
	CMyStringEx(const char * pszParam);
	~CMyStringEx();
	__int64  Find(const char* pszParam);
	int SetString(const char* pszParam);
	void OnSetString(char* pszData, int nLength) override;
};