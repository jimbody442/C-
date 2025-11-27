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
	Mydata operator +(const Mydata& rhs)
	{
		//호출자 함수에서 이름없는 임시 객체를 생성
		return Mydata(*data + *rhs.data);
	}
	Mydata& operator =(const Mydata& rhs) //참조 대입 연산자	a =b;에서 b는 l-value
	{
		cout << "Mydata& operator =(const Mydata& rhs) 호출" << endl;
		if (this == &rhs)
		{
			return *this;
		}
		delete data;
		data = new int(*rhs.data);
		return  *this;
	}
	operator int() const
	{
		cout << "operator int() 호출" << endl;
		return *data;
	}

	//이동 대입 연산자 다중 정의
	Mydata& operator =(Mydata&& rhs) //r-value 참조자 ,임시 객체를 가리킴 a = b + c;에서 b + c는 임시 객체
	{
		cout << "Mydata& operator = (Mydata&& rhs) 호출" << endl;
		
		//앝은 복사를 수행
		data = rhs.data;
		rhs.data = NULL; //이동된 객체의 포인터를 NULL로 설정
		return *this;
	}

	~Mydata()
	{
		delete data;
		cout << "Mydata 소멸자 호출" << endl;
	}
};
int main()
{
	Mydata a(0), b(3), c(4);

	cout << "*****Before*****" << endl;

	//이동 대입 연산자 실행
	a = b + c;
	cout << "a의 값: " << a << endl; //operator int() 호출
	a = b;
	cout << "a의 값: " << a << endl; //operator int() 호출
}