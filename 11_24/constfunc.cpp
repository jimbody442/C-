#include <iostream>
using namespace std;

class Test
{
private :
	int data = 0;
public:
	Test(int Param) : data(Param) {}
	~Test(){}

	//멤버 변수의 값의 변경
	void SetData(int Param)
	{
		data = Param;
	}
	//멤버 변수의 값의 변경이 불가능한 함수로 설정
	int GetData() const
	{
		return data;
	}
};


int main()
{
	Test a(10);

	cout << a.GetData() << endl;

	a.SetData(20);
	cout << a.GetData() << endl;

	return 0;
}