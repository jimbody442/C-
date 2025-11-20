//생성자 함수의 멤버 변수를 초기화 하는 목록 활용

#include <iostream>
using namespace std;

class CTest
{
public:
	CTest()
	:m_nData1(10), m_nData2(20)
	{

	}
	int m_nData1; // 생성자에서 멤버 변수 초기화 목록을 사용하지 않고 선언과 동시에 초기화 가능. int m_nData1 =10; 
	int m_nData2; //생성자에서 멤버 변수 초기화 목록을 사용하지 않고 선언과 동시에 초기화 가능. int m_nData2 =20; 

	void PrintData(void);
};

void CTest::PrintData(void)
{
	cout << "m_nData1:" << m_nData1 << ", m_nData2:" << m_nData2 << endl;
}

int main()
{
	CTest test;
	test.PrintData();

}