#include <iostream>

using namespace std;

class CTest
{
public:
	
	//매개변수가 하나뿐인 생성자는 형변환이 가능.
	//하지만 묵시적으로 불가능하도록 차단.
	explicit CTest(int nparam) : m_ndata(nparam)
	{
		cout << "CTest(int)" << endl;
	}
	//묵시적 변환 생성자가 사용자 모르게 호출될 가능성을 차단.


	CTest(int nparam) : m_ndata(nparam)
	{
		cout << "CTest(int)" << endl;
	}
	~CTest()
	{
		cout << "~CTest()" << endl;
	}

	CTest(const CTest& rhs) : m_ndata(rhs.m_ndata)
	{
		cout << "CTest(const CTest &)" << endl;
	}

	int Getdata() const
	{
		return m_ndata;
	}
	
	void Setdata(int nparam)
	{
		m_ndata = nparam;
	}
private:
	int m_ndata = 0;
};

// 사용자 코드
//매개변수가 클래스 형식이며, 묵시적으로 변환 생성.
void TestFunc(const CTest &param)
{
	cout << "TestFunc():" << param.Getdata() << endl;
}




int main()
{
	cout << "*******Begin*******" << endl;
	//int 자료형에서 CTest 형식으로 변환될 수 있다.
	TestFunc(5);

	cout << "********end*******" << endl;
	return 0;
}