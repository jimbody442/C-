//복합 대입 연산자
#include <iostream>
using namespace std;

class Mydata
{
private:
	// 포인터 멤버 변수
	int* data = nullptr;
public:
	//기본 생성자 또는 변환 생성자
	explicit Mydata(int nParam)
	{
		data = new int(nParam);
		cout << "Mydata(int nParam) 생성자 호출" << endl;
	}
	//복사 생성자
	Mydata(const Mydata& rhs) 
	{
		data = new int(*rhs.data);
		cout << "Mydata(const Mydata& rhs) 복사 생성자 호출" << endl;
	}
	//복합 대입 연산자
	Mydata& operator +=(const Mydata& rhs)
	{
		cout << "Mydata& operator +=(const Mydata& rhs) 호출" << endl;
		int* pnNewdata = new int(*data + *rhs.data);

		//기존 메모리 해제
		delete data;
		this->data = pnNewdata;

		return *this;
	}
	operator int() const 
	{
		cout << "operator int() 호출" << endl;
		return *data;
	}

	~Mydata()
	{
		delete data;
		cout << "Mydata 소멸자 호출" << endl;
	}
};
int main()
{
	Mydata a(0), b(5), c(10);

	a += b;
	a += c;
	cout << "a의 값: " << a << endl; //operator int() 호출
}