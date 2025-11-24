#include <iostream>
using namespace std;

class Test
{
private:
	//private 멤버 변수가 mutalve 키워드로 선언되면 const 멤버 함수 내에서 수정 가능.
	mutable int data = 0;
public:
	Test() {}
	Test(int Param) : data(Param) {}
	~Test() {};
	int Getdata() const
	{
		data = 20; // const 멤버 함수 내에서 mutable 멤버 변수 수정 가능.
		return data;
	}
	void Setdata(int Param)
	{
		data = Param;
	}
};

int main()
{
	//mutable 키워드 사용하여 const 멤버 함수 내에서 멤버 변수 수정 가능.
	Test strData(10);
	cout << strData.Getdata() << endl;

	return 0;
}