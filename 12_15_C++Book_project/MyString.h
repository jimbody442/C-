#pragma once
class CMyString
{
public:
	//생성자와 소멸자 선언
	CMyString();	//default생성자
	CMyString(CMyString&);		//복사 생성자
	explicit CMyString(const char*pszParam); // 변환 생성자
	CMyString(CMyString&& rhs);	//이동 생성자
	~CMyString();	//소멸자

private:
	//문자열 저장을 위해 동적할당한 메모리를 가리키는 포인터
	char* m_pszData;

	//저장된 문자열의 길이 값 정수형 변수
	int m_nLength;
public:
	//멤버 함수 선언
	int SetString(const char* pszParam);
	const char* GetString()const;
	const int Getint()const;
	void Release();
	CMyString& operator = (const CMyString&rhs);
	operator char*()const
	{
		return m_pszData;
	}
};