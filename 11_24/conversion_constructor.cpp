#include <iostream>
using namespace std;

class TestData
{
private:
	int data = 0;

public:
	//매개변수가 하나뿐인 생성자는 변환 생성자(conversion constructor)로 동작할 수 있다.
	TestData(int Param) : data(Param)
	{
		cout << "TestData(int Param) 생성자 호출" << endl;
	}

	TestData(const TestData& rhs) : data(rhs.data)
	{
		cout << "TestData(const TestData& rhs) 복사 생성자 호출" << endl;
	}

	int Getdata() const { return data; }
	void Setdata(int Param) { data = Param; }
	~TestData() 
	{
		cout << "소멸자 호출" << endl;
	}
};

void TestFunc(const TestData& param)
{
	cout << "TestFunc()" << param.Getdata() << endl;
}

int main()
{
	//int 자료형에서 TestData 형식으로 변환될 수 있다.
	TestFunc(100);
}