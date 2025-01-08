//생성자 초기화 목록.
//생성자 초기화 목록은 콜론(:)을 기술해야 함.
// 만일 초기화 해야하는 변수가 여러 개먄 쉼표를 찍고 이어 작성.
// 하지만 멤버변수가 참조자 형식이면 반드시 초기화 목록을 이용하여 초기화!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
using namespace std;

class Ctest
{
public:
	Ctest() :m_data(10), m_data2(20) { }

	// 두 개의 멤버 데이터 선언
	int m_data;
	int m_data2;


	void PrintData(void)
	{
		cout << m_data << endl;
		cout << m_data2 << endl;
	}
};

//사용자 코드
int main()
{
	Ctest t;
	t.PrintData();
}