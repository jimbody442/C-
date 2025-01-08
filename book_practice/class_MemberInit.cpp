//클래스는 생성자를 이용하여 초기화 할 수있다.
//생성자를 이용하는 함수의 가장 중요한 특징은 "반환값이 없다", "호출하는 함수가 아니라 적저한 시기에 내부에서 자동 호출되는 함수"
#include <iostream>

using namespace std;

class CTest
{
public:
	//class 의 '생성자 함수' 선언 및 정의
	CTest()
	{
		//인스턴스가 생성되면 멤버 데이터를 '자동으로' 초기화 한다.
		m_Data = 10;
	}
	// 멤버 데이터 선언
	int m_Data;

	//멤버 함수 선언 및 정의
	void PrintData(void)
	{
		//멤버 데이터에 접근하고 값을 출력
		cout << m_Data << endl;
	}
};

int main()
{
	CTest t;
	t.PrintData();
	
	return 0;
}

//별도로 CTest t 인스턴스를 생성할 떄 초기화 코드를 기술하지 않더라도 생성자 함수에서 규정한 값으로 멤버함수가
//자동으로 초기화 진행.
