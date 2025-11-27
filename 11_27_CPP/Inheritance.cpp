#include <iostream>
using namespace std;

//제작자 초기 개발자가 개발한 class
class Base
{
public: //누구나	접근 가능
	Base() { cout << "Base 기본 생성자 호출" << endl; }
	int Getdata()  { return data; }
	void Setdata(int nParam) { data = nParam; }

protected: //상속받은 클래스에서 접근 가능
	void PrintData() 
	{
		cout << "Base 클래스 PrintData(): " << data << endl;
	}

private://오직 Base 클래스 내에서만 접근 가능
	int data = 0;

};

//후기에 작성한 제작자
//위의 Base 클래스를 상속받아 기능을 확장

class BaseEx : public Base
{
public:
	BaseEx() { cout << "BaseEx의 기본 생성자 또는 변환 생성자 호출"; }
	void Func()
	{
		//기본 형식 멤버에 접근, 즉 Base 클래스의 멤버 함수 호출
		PrintData();
		Setdata(5);
		cout << Base::Getdata() << endl;


	}
};

int main()
{
	BaseEx obj;

	//기본 클래스 멤버에 접근
	obj.Setdata(10);
	cout << obj.Getdata() << endl;

	//파생 클래스 멤버에 접근
	obj.Func();

	return 0;
}