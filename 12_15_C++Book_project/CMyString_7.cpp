#include "stdafx.h"
#include "MyString.h"



CMyString::CMyString() :m_pszData(NULL), m_nLength(0)		//default 생성자 정의
{
	cout << "기본 생성자가 실행되었습니다" << endl;
	cout << "m_pszData를 NULL, m_nLength를 0으로초기화" << endl;
}

CMyString::CMyString(const CMyString& rhs) : m_pszData(NULL), m_nLength(0)	//복사 생성자 정의
{
	cout << "복사 생성자가 실행되었습니다." << endl;


	//새로운 메모리 할당
	this->SetString(rhs.GetString());
}

CMyString::CMyString(const char* pszParam) :m_pszData(NULL), m_nLength(0)	//변환 생성자 정의
{
	cout << "변환 생성자가 실행되었습니다" << endl;
	SetString(pszParam);
}

CMyString::CMyString(CMyString&& rhs) : m_pszData(NULL), m_nLength(0)
{
	cout << "이동생성자 호출" << endl;
	//원본은 곧 소멸되기 때문에 얕은 복사 실행.
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	//원본은 초기화. 소멸은 x
	rhs.m_pszData = NULL;
	rhs.m_nLength = 0;

}




CMyString::~CMyString()					//소멸자 정의
{
	cout << "소멸자가 실행되었습니다" << endl;
	//객체 소멸전에 메모리해제
	Release();
}


int CMyString::SetString(const char* pszParam)	//SetStrig 멤버 함수 정의
{
	//새로운 문자열 할당 전 기존 정보 해제
	Release();
	//NULL일경우 실행
	if (pszParam == NULL)
	{
		return 0;
	}

	//문자열 길이가 0이면 초기화로 인식하고 처리
	int nLength = strlen(pszParam); //strlen은 NULL문자를 포함하지 않는다.
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


const char* CMyString::GetString()const		//GetString 멤버 함수 정의
{
	return m_pszData;
}



int CMyString::GetLength() const
{
	return m_nLength;

}

int CMyString::Append(const char* pszParam)
{
	//유효성 검사
	if (pszParam == NULL)
	{
		return 0;
	}


	int nLenParam = strlen(pszParam); // 신규 전달받은 문자의 길이 측정 후 대입

	if (nLenParam == 0)		//유효성 검사 
	{
		return 0;
	}

	//세트된 문자열이 없다면 새로 문자열을 할당한 것과 동일 처리, 즉(붙힐 문자열이 없음)
	if (m_pszData == NULL)
	{
		SetString(pszParam);

		return m_nLength;
	}

	//만약 전달받은 문자열 전에 데이터가 있는경우	즉(붙힐 문자열이 존재하므로 메모리 확장 필요)
	//현재 문자열의 길이 backup

	int n_LenCur = m_nLength; //과거 문자열 길이

	//두 문자열을 합쳐서 저장할 수 있는 메모리를 새로 할당함.
	char* pszResult = new char[n_LenCur + nLenParam + 1]; //합쳐질 문자열 메모리 공간 확보 및 대입.

	//문자열 조합.
	strcpy_s(pszResult, sizeof(char) * (n_LenCur + 1), m_pszData); //전에 있었던 문자열 copy
	strcpy_s(pszResult + sizeof(char) * n_LenCur, sizeof(char) * (nLenParam + 1), pszParam);

	//기존 문자열 삭제 및 멤버 정보 갱신
	Release();

	m_pszData = pszResult;
	m_nLength = n_LenCur + nLenParam;

	return m_nLength;

}


void CMyString::Release()		//초기화를 위한 Release 멤버 함수 정의
{
	//함수가 여러번 호출될 경우를 고래해 주요 멤버를 초기화
	if (m_pszData != NULL)
	{
		cout << m_pszData << "를 소멸합니다." << endl;
		delete[] m_pszData;
		cout << "소멸" << endl;

	}

	m_pszData = NULL;
	m_nLength = 0;
}

CMyString& CMyString:: operator =(const CMyString& rhs)	// 멤버 대입 연산자 정의
{
	//만약 자기 자신에 대한 대입이면 실행 X
	if (this != &rhs)
	{
		this->SetString(rhs.GetString());
	}

	return *this;
}

CMyString CMyString:: operator+(const CMyString& rhs)const
{
	CMyString strResult(m_pszData); //새로운 지역 클래스 인스턴스 생성
	strResult.Append(rhs.GetString());
	return strResult; //임시객체 생성

}
CMyString& CMyString:: operator+=(const CMyString& rhs)
{
	Append(rhs.GetString());
	return *this;
}

char CMyString :: operator [](int nIndex)const //일반적인 배열 연산자
{
	cout << "const operator[] 호출" << endl;
	return m_pszData[nIndex];
}
char& CMyString :: operator [](int nIndex)	//비상수 배열 연산자
{
	cout << "non-const operator[] 호출" << endl;
	return m_pszData[nIndex];
}

