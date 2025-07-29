//동적 객체의 생성과 소멸
#include <iostream>
using namespace std;

class CTest
{
	int m_nData; //멤버 데이터
public:
	CTest()
	{
		cout << "CTest 생성자 호출" << endl;
	}

	~CTest()
	{
		cout << "CTest 소멸자 호출" << endl;
	}
};

int main()
{
	cout << "Begin main" << endl;

	CTest* pData = new CTest;
	cout << "CTest 객체 생성 완료 " << endl;

	delete pData; //동적 할당된 객체의 소멸자 호출
	cout << "CTest 객체 소멸 완료" << endl;
	cout << "End main" << endl;
	return 0;
}