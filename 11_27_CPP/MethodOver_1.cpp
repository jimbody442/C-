//메서드의 재정의.
//메서드를 재정의하면 기존의 것이 무시되고 새로 정의한 메서드가 호출된다.
//기본클래스에서 정의 되어 있지만 파생 클래스에서 다시 정의한 메서드를 재정의 메서드라고 한다.

#include <iostream>
using namespace std;

//초기 제작자.
class base
{
public:
	int Getdata() { return data; }

	void Setdata(int Param) { data = Param; }

private:
	int data = 0;
};

//신규 제작자.

class baseEx : public base
{
public:
	//파생 클래스에서 기본 클래스의 메서드를 재정의
	void Setdata(int Param)
	{
		//입력 데이터 값을 보정하는 새로운 기능 추가
		if (Param < 0)
		{
			base::Getdata(); //기본 클래스의 Getdata() 호출 //기본클래스의 base::을 사용하지 않으면 무한 재귀 호출 발생
		}
		if (Param > 10)
		{
			base::Setdata(10); //기본 클래스의 Setdata() 호출
		}
	}

};

int main()
{
	base obj;
	obj.Setdata(-10); //baseEx 클래스의 Setdata() 호출
	cout << obj.Getdata() << endl; //base 클래스의 Getdata() 호출

	baseEx objEx;

	//신규 클래스는 값을 보정하여 저장

	objEx.Setdata(15); //baseEx 클래스의 Setdata() 호출

	// objEx.base::Getdata(); //기본 클래스의 Getdata() 호출
	cout << objEx.Getdata() << endl; //base 클래스의 Getdata() 호출

}