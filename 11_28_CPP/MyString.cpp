#include <iostream>
#include "MyString.h"
using namespace std;

// 기본 생성자 정의
CMyString::CMyString() : m_pszData(NULL), m_nLength(0)
{
    cout << "CMyString 기본 생성자 호출" << endl;
}

// 소멸자 정의
CMyString::~CMyString()
{
    Release();
    cout << "CMyString 소멸자 호출" << endl;
}

int CMyString::SetString(const char* pszParam)
{
    //새로운 문자열 할당에 앞서 기존 정보를 해제
    Release();

    //NULL을 인수로 함수를 호출했다는 것은 메모리 해제
    // NULL로 초기화
    if (pszParam == NULL)
    {
        return 0;
    }

    //길이가 0인 문자열도 초기화로 인식하고 처리
    int n_Length = strlen(pszParam);

    if (n_Length == 0)
    {
        return 0;
    }
    
    //문자열의 끝인 NULL을 고려해 메모리 할당
    m_pszData = new char[n_Length + 1];

    //새로 할당한 메모리에 문자열 저장
    strcpy_s(m_pszData, sizeof(char) * (n_Length + 1), pszParam);
    m_nLength = n_Length;

    //문자열 길이 반환
    return n_Length;
}

const char* CMyString::GetString()
{
    return m_pszData;
}

void CMyString::Release()
{
    //이 함수가 여러번 호출될 경우를 고려해 주요 멤버를 초기화
    if (m_pszData != NULL)
        delete[] m_pszData;

    m_pszData = NULL;
    m_nLength = 0;
}

int main()
{
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
}