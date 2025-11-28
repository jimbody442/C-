#include <iostream>

using namespace std;

class CMytest
{
public:
	//가상 함수 선언 및 정의
	virtual void printData()
	{
		cout << "CMytest:" << data << endl;
	}

	void TestFunc()
	{
		cout << "****TestFunc****" << endl;
	
		//실 형식의 함수가 호출
		cout << "***********" << endl;
	}

protected:
	int data = 10;

};

class CMytestEx : public CMytest
{
public:
	//기본 클래스의 가상 함수 멤버를 재정의
	virtual void printData()
	{
		cout << "CMytestEx: " << data * 2 << endl;
	}

};

int main()
{
	CMytestEx a;
	a.printData();

	CMytest& b = a;

	b.printData();

	a.TestFunc();
}