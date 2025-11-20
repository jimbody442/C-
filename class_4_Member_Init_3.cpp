//클래스 내부의 함수 선언과 정의를 분리
#include <iostream>
using namespace std;

//제작자 코드
class CTest
{
public:
	//CTest 클래스의 '생성자 함수' 선언 및 정의
	CTest()
	{
		//인스턴스가 생성되면 멤버 데이터를 자동으로 초기화
		m_nData = 10;
	}

	//멤버 데이터 선언
	int m_nData;

	//멤버 함수 선언 및 정의
	void PrintData(void);
	
};

//멤버 함수 정의
void CTest::PrintData(void)
{
	cout << "m_nData:" << m_nData << endl;
}

//사용자 코드

int main()
{
	cout << "_tmain() 함수 시작" << endl;

	CTest test; // CTest 클래스의 인스턴스 생성, 자동으로 생성자 함수 호출하여 멤버 초기화
	test.PrintData(); //클래스 멤버 함수 호출
	cout << "_tmain() 함수 종료" << endl;
}