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
		cout << "CMydata(int nParam) 생성자 호출" << endl;
	}
	//복사 생성자
	CMydata(const CMydata& rhs) : data(rhs.data)
	{
		cout << "CMydata(const CMydata& rhs) 복사 생성자 호출" << endl;
	}
	//이동 생성자(r-value 참조자) 이동생성자가 호출되는 시점은 임시 객체가 생성되고 나서 바로 다음이다.
	CMydata(const CMydata&& rhs) : data(rhs.data)
	{
		cout << "CMydata(const CMydata&& rhs) 이동 생성자 호출" << endl;
	}
	//형변환 연산자
	operator int()
	{ 
		cout << "operator int() 호출" << endl;
		return data;
	}
	//덧셈 연산자
	CMydata operator +(const CMydata& rhs)
	{
		cout << "CMydata operator +(const CMydata& rhs) 호출" << endl;
		CMydata result(0);
		result.data = this->data + rhs.data;
		return result;
	}
	/*void operator =(CMydata& rhs)
	{
		cout << "단순 대입 연산자 호출" << endl;
		if (this == &rhs)
		{
			return;
		}
		else
		{
			this->data = rhs.data;
		}
	}
	*/
	//참조 대입 연산자
	CMydata& operator =(const CMydata& rhs)
	{
		cout << "CMydata operator =(const CMydata& rhs) 호출" << endl;
		this->data = rhs.data;
		return *this;
	}
};

int main()
{
	cout << "*****Before*****" << endl;
	CMydata a(10), b(3), c(4);

	//b+c의 연산을 실행하면 이름없는 임시 객체가 만들어지며
	//a에 대입하는 것은 임시객체이다.
	a = b + c;
	cout << a << endl;
	cout << "*****End*****" << endl;

	return 0;
}