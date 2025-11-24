
/* const char*변환 생성자와 char*로 형변환 연산자 코드 작성*/
#include <iostream>
using namespace std;

class CMystring
{
public:
	CMystring(): data("0") { cout << "CMystring 디폴트 생성자 호출" << endl; }
	
	explicit CMystring(string str) : data(str)
	{
		cout << "CMystring 매개변수 생성자 호출" << endl;
	}

	//형변환 연산자 정의 및 구현
	//operator 
	CMystring(const CMystring& str) { cout << "CMystring 복사 생성자 호출" << endl; }

	string Getdata() const { return data; }

	~CMystring() { cout << "CMystring 소멸자 호출" << endl; };

private:
	string data;
};


void TestFunc(const CMystring& ptr)
{
	cout << "TestFunc() 호출" << endl;

	cout << ptr.Getdata() << endl;

}
int main()
{

	CMystring str0;
	CMystring str1("Hello");
	::TestFunc(str0); //복사 생성자 호출
	::TestFunc(str1); //복사 생성자 호출
	::TestFunc(CMystring("world")); //explicit을	 사용하지 않았으므로 매개변수 생성자 호출 후 복사 생성자 호출
	return 0;
}