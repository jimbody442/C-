#include <iostream>
using namespace std;

class CTest
{
public:
	CTest(int nParam)
		:m_nData(nParam)
	{
		//SetData(nParam);
	}

	~CTest()
	{
	}

	//상수형 메서드로 선언 및 정의
	int GetData() const
	{
		//멤버 변수의 값을 읽기만 가능
		return m_nData;
	}

	int SetData(int nParam)
	{
		m_nData = nParam;
		
		
	}

private:
	int m_nData = 0;
};

int main()
{
	CTest test(10);
	cout << "Data: " << test.GetData() << endl;

	return 0;
}