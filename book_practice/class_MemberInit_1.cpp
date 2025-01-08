#include <iostream>
using namespace std;


//제작자 코드
class Ctest
{
public:
	//Ctest 클래스의 생성자 함수 선언 및 정의
	Ctest()
	{
		//인스턴스 생성되면 멤버 데이터를 자동으로 초기화
		cout << "Ctest() : 생성자 함수 " << endl;
		m_data = 10;
	}
	int m_data;

	void PrintData(void)
	{
		cout << m_data << endl;
	}
};

//사용자 코드
int main()
{
	Ctest m;
	m.PrintData();
}
