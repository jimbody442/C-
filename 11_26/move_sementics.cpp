#include <iostream>
using namespace std;

//이동 생송자(move semantics) 
//이름없는 임시 객체를 효율적으로 처리하기 위한 기법
//복사 생성자와 r-value 참조자를 함께 사용하여 새로운 생성 및 대입의 경우
//임시 객체의 자원을 이동시켜 불필요한 복사를 줄이는 기법
class CTest
{
private:
	int data = 0;
public:
	CTest() { cout << "CTest() 기본 생성자 호출" << endl; }
	~CTest() { cout << "CTest() 소멸자 호출" << endl; }

	CTest(const CTest& rhs) : data(rhs.data)
	{
		cout << "CTest(const CTest& rhs) 복사 생성자 호출" << endl;
	}

	CTest(const CTest&& rhs) : data(rhs.data)
	{
		cout << "CTest(const CTest&& rhs) 이동 생성자 호출" << endl;
	}

	CTest& operator =(const CTest& rhs) = default; //기본 대입 연산자 사용

	int Getdata() const { return data; }
	void Setdata(int Param) { data = Param; }
};

CTest TestFunc(int nparam)
{
	cout << "TestFunc() 호출" << endl;
	CTest a; //지역 객체
	a.Setdata(nparam);
	cout << "TestFunc() 종료" << endl;
	return a;
}

int main()
{
	CTest b;
	cout << "*****Before*****" << endl;
	b = TestFunc(20);
	cout << "*****After*****" << endl;
	CTest c(b);
	return 0;
}