//배열 삭제
#include <iostream>
using namespace std;

class CTest
{
	int m_nData; // 멤버 데이터

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
	CTest* pData = new CTest[3];

	delete[] pData; 
	cout << "End" << endl;

	return 0;
}