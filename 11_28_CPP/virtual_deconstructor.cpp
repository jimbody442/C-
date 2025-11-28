//CMydata* data =new CmydataEx 
//위와 같이 상위클래스로 하위 파생 클래스를 참조할때 상위 클래스 형식을 추상 자료형이라고함.

#include <iostream>
using namespace std;

class CMydata
{
private:
	char* data;
public:
	CMydata() { data = new char[32]; }
	virtual ~CMydata() // 가상 소멸자를 기본 클래스 즉 상위 클래스에서 정의 및 선언 해야 하위 클래스에서 소멸자가 동작 후 상위 클래스의 소멸자도 동작할 수 있음
	{
		cout << "~CMydata()"<< endl;
		delete data;
	}
};

class CMydataEx : public CMydata
{
public:
	CMydataEx() { data = new int; }
	~CMydataEx() 
	{
		cout << "~CMydataEx 호출" << endl;
		delete data;
	}

private:
	int* data;
};

int main()
{
	CMydata* data = new CMydataEx;

	delete data;
}
