#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(int val, const char* pszname) : data(val), name(pszname)
	{
		cout << " CTest 매개변수 2개 생성자 호출" << endl;
		cout << " CTest(int): " << data << ", name: " << name << endl;
	}

	CTest(const CTest& rhs) :data(rhs.data), name(rhs.name)
	{
		cout << "CTest(const CTest & rhs) 복사 생성자 호출" << endl;
	}

	CTest& operator =(const CTest& rhs)
	{
		cout << "CTest::operator=() 호출" << endl;
		//값은 변경되지만 이름은 변경되지 않음
		this->data = rhs.data;
		return *this;
	}

	~CTest() { cout << " CTest 소멸자 호출" << endl; }

	int Getdata() const { return data; }
	char Getname() const { return *name; }
	void Setdata(int Param) { data = Param; }

private:
	int data = 0;

	//변수 이름을 저장하기 위한 멤버 변수
	const char* name;
};

CTest TestFunc(int nParam)
{
	//외부 함수에서 CTest 클래스 객체를 반환
	CTest temp(nParam, "t");

	return temp; //소멸자를 호출하여 temp 객체 소멸
}

int main()
{
	CTest a1(5, "a");
	cout << "*****Begin*****" << endl;

	//함수가 반환되면서 임시 객체가 생성되었다가 a1의 값이 변경되고 임시 객체 temp는 소멸
	a1 = TestFunc(10);
	cout << a1.Getdata() << endl;
	cout << a1.Getname() << endl;
}