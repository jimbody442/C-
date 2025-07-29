#include <iostream>
using namespace std;

class CTest
{
public:
	int m_nData;
	CTest() //생성자
	{
		//자동 초기화
		m_nData = 10;

	}
	~CTest() //소멸자 
	{
		cout << "CTest 소멸자 호츌" << endl;
		//소멸자에서는 멤버 데이터의 값을 출력하지 않는다.
	}

	//멤버 함수 선언과 정의 분리
	void PrintData(void);
};

void CTest::PrintData(void) //멤버 함수 정의
{
	//멤버 데이터 출력
	cout << "m_nData : " << m_nData << endl;
}

int main()
{
	CTest t;
	t.PrintData();
	
	return 0;
	//블록의 끝에서 소멸자 호출하여 소멸
}