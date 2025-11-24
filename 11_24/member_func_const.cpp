#include <iostream>
using namespace std;

class Test
{
private:
	int data = 0;

public:
	Test() {}
	Test(int Param) : data(Param) {}
	~Test() {};

	int Getdata() const
	{
		return data;
	}

	void Setdata(int Param)
	{
		data = Param;
	}

	void TestFunc(const Test& param)
	{
		cout << param.Getdata();
	}

};

int main()
{
	Test strData;
	strData.TestFunc(strData); //자신의 클래스 객체를 매개변수로 함수에 전달.
}