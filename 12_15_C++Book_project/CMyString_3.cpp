#include "stdafx.h"
#include "MyString.h"



CMyString::CMyString():m_pszData(NULL), m_nLength(0)
{
	cout << "기본 생성자가 실행되었습니다" << endl;
	cout << "m_pszData를 NULL, m_nLength를 0으로초기화" << endl;
}

CMyString::CMyString(CMyString& rhs) : m_pszData(NULL), m_nLength(0)
{
	cout << "복사 생성자가 실행되었습니다." << endl;


	//새로운 메모리 할당
	this->SetString(rhs.GetString());
}

CMyString::~CMyString()
{
	cout << "소멸자가 실행되었습니다" << endl;
	//객체 소멸전에 메모리해제
	Release();
}


int CMyString::SetString(const char* pszParam) //pszParam은 문자의 시작주소를 갖고 있음.
{
	//새로운 문자열 할당 전 기존 정보 해제
	Release();
	//NULL일경우 실행
	if (pszParam == NULL)
	{
		return 0;
	}

	//문자열 길이가 0이면 초기화로 인식하고 처리
	int nLength = strlen(pszParam);
	if (nLength == 0)
	{
		return 0;
	}

	//char형식의 문자열은 마지막 문자에 NULL문자를 포함하기 때문에 +1 메모리 할당.
	m_pszData = new char[nLength + 1];

	//새로 할당한 메모리에 문자열을 저장
	strcpy_s(m_pszData, sizeof(char) * (nLength + 1), pszParam);
	m_nLength = nLength;

	return nLength;
}


const char* CMyString::GetString()const
{
	return m_pszData;
}



const int CMyString:: Getint()const
{
	return m_nLength;
}


void CMyString::Release()
{
	//함수가 여러번 호출될 경우를 고래해 주요 멤버를 초기화
	if (m_pszData != NULL)
	{
		delete[] m_pszData;
	}

	m_pszData = NULL;
	m_nLength = 0;
}

CMyString& CMyString:: operator =(const CMyString& rhs)
{
	//만약 자기 자신에 대한 대입이면 실행 X
	if (this != &rhs)
	{
		this->SetString(rhs.GetString());
	}
	
	return *this;
}
