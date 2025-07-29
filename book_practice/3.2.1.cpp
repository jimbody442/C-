//생성자와 소멸자
#include <iostream>
using namespace std;

class CTest
{
public:
	//멤버 데이터 선언
	int m_nData;

	CTest() //생성자로 자동 호출
	{
		cout << "CTest 생성자 호출" << endl;
		m_nData = 10;
	}



	void PrintData(void)
	{
		//멤버 데이터 접근하고 값을 출력
		cout << "m_nData : " << m_nData << endl;
	}
};

int main()
{
	CTest t;
	t.PrintData();
}
