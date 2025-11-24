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
	void TestFunc(const int& param)
	{
		int& NewData = const_cast<int&>(param); //매개변수로 전달된 const int& param를 const_cast를 사용하여 int&로 변환.

		NewData = 20; //const_cast로 변환된 int& NewData를 사용하여 값 수정.
	}
};

int main()
{
	//const_cast <> 사용하여 const 멤버 함수 내에서 멤버 변수 수정 가능.
	int value = 10;
	Test strData(value);
	cout << strData.Getdata() << endl;
	
	strData.TestFunc(value); //const 멤버함수에	const int& param로 20 전달.
	cout << value << endl; //20출력, 멤버 변수가 변경되는 것이 아니라 매개변수로 전달된 value가 변경되었음
	return 0;
}