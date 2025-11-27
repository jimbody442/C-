#include <iostream>
using namespace std;

class CMydata
{
private:
	int data = 0;
public:
	//기본 생성자 또는 변환 생성자
	CMydata(int nParam) : data(nParam)
	{

	}

	//형변환	연산자
	operator int()
	{
		return data;
	}

	//전위 증가 연산자
	int operator ++()
	{
		cout << "전위 증가 연산자 호출" << endl;
		return ++data;
	}

	//후위 증가 연산자
	int operator ++(int)
	{
		cout << "후위 증가 연산자 호출" << endl;
		return data++;

	}

};


int main()
{
	CMydata a(10);

	//전위	증가 연산자 호출
	cout << ++a << endl;

	//후위 증가 연산자 호출
	cout << a++ << endl;

	cout << a << endl;
}