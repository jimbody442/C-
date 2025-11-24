#include <iostream>
using namespace std;

class TestData
{
private:
	int data = 0;

public:
	//매개변수가 하나뿐인 생성자는 변환 생성자(conversion constructor)로 동작할 수 있다.
	//묵시적	형 변환을 막기 위해 explicit 키워드를 사용
	explicit TestData(int Param) : data(Param)
	{
		cout << "TestData(int Param) 생성자 호출" << endl;
	}

	//형 변환 연산자(Conversion Operator) : 클래스 객체를 다른 자료형으로 변환할 때 사용
	operator int(void)
	{
		return data;
	}

	int Getdata() const { return data; }
	void Setdata(int Param) { data = Param; }
	~TestData()
	{
		cout << "소멸자 호출" << endl;
	}
};


int main()
{
	TestData a(10);

	cout << a.Getdata() << endl;

	//TestData 형식에서 int 형식으로 변환
	cout << a << endl;
	cout << a.operator int() << endl;
	cout << static_cast<int>(a) << endl;
}