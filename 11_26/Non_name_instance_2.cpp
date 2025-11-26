#include <iostream>
using namespace std;

class CTest
{
private:
	int data = 0;

	const char* name = nullptr;
public:
	CTest(int val, const char* psname) : data(val), name(psname)
	{
		cout << " CTest 매개변수 2개 생성자 호출" << endl;
		cout << " CTest(int): " << data << ", name: " << name << endl;
	}

	~CTest() { cout << " CTest 소멸자 호출" << endl; }

	CTest(const CTest& rhs) : data(rhs.data), name(rhs.name)
	{
		cout << "CTest(const CTest & rhs) 복사 생성자 호출" << endl;
		cout << name << endl;
	}

	CTest& operator =(const CTest& rhs)
	{
		cout << "CTest::operator=() 호출" << endl;
		//값은 변경되지만 이름은 변경되지 않음
		this->data = rhs.data;
		return *this;
	}

	int Getdata() const { return data; }
	char Getname() const { return *name; }
	void Setdata(int Param) { data = Param; }


};

CTest TestFunc(int nParam)
{
	//외부 함수에서 CTest 클래스 객체를 반환
	CTest temp(nParam, "t"); //지역 객체(인스	턴스)
	return temp; //소멸자를 호출하여 temp 객체 소멸
}

int main()
{
	CTest a1(5, "a");
	cout << "*****Before*****" << endl;

	//함수가 반환되면서 임시 객체가 생성되었다가 a1의 값이 변경되고 임시 객체 temp는 소멸
	a1 = TestFunc(10); //또는 TestFunc(10).Getdata();
	cout << "*****After*****" << endl;
	cout << a1.Getdata() << endl;
	cout << a1.Getname() << endl;
}