#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(int nParam)
		:m_nData(nParam)
	{
	}

	~CTest()
	{
	}

	//상수형 메서드로 선언 및 정의
	int GetData() const
	{
		m_nData = 20;
		return m_nData;
	}

	int SetData(int nParam)
	{
		m_nData = nParam;
	}
private:
	 mutable int m_nData = 0; //mutable 예약어를 사용하여 상수형 메서드에서 수정 가능.

};


int main()
{
	CTest a(10);
	cout << " Data: " << a.GetData() << endl;

	return 0;
}