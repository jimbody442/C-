#include <iostream>
using namespace std;

class Test
{
private:
	int data;

public:
	Test() // 디폴트 생성자
	{
		data = 0;
		cout << "Test::Test() 호출" << endl;
	}
	Test(int n) // 매개변수가 있는 생성자
	{
		data = n;
		cout << "Test::Test(int n) 호출" << endl;
	}
	~Test() // 소멸자
	{
		cout << "Test::~Test() 호출" << endl;
	}
};


int main()
{
	//동적 객체 생성 및 소멸
	//new 연산자를 사용하여 동적 객체 생성
	//delete 연산자를 사용하여 동적 객체 소멸
	//배열로 생성된 동적 객체는 delete[] 연산자를 사용하여 소멸
	cout << "시작" << endl;

	//동적 객체 생성
	Test* p1 = new Test(); //디폴트 생성자 호출, 포인터 p1이 동적 객체의 주소를 가리킴
	Test* p2 = new Test[3]; //디폴트 생성자 3회 호출, 포인터 p2가 동적 객체 배열의 주소를 가리킴 ,첫번째	객체의 주소
	cout << p2 << endl;
	cout << &p2[0] << endl; //첫번째 객체의 주소
	cout << "Test" << endl;

	delete p1; //동적 객체 소멸, 소멸자 호출
	cout << "end" << endl;
	return 0;
}