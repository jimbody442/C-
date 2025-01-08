//전역 변수는 객체지향 프로그래밍에서 소속 객체가 없이 스스로 존재하는 전역 함수들은 좋은 설계를 역행하거나
//불필요한 의존 관계를 만드는 원인이 될 수 있다.

//그래서 나온 대안이 바로 정적멤버.
//정적 멤버는 사실상 전역변수나 함수와 같지만 단지 클래스 멤버로 들어와 있을 뿐이다.

//정적은 선언 앞에 static예약어를 작성.
// 정적 멤버함수는 인스턴스를 선언하지 않고 직접 호출 가능, 그러나 this포인터를 사용할 수 없으며 정적 변수는 반드시 선언과 정의를 분리.

#include <iostream>

using namespace std;

class C
{
public:
	C(int nParam) : nData(nParam) {
		nCount++;
	}
	int Getdata() {
		return nData;
	}
	void ResetCount() {
		nCount = 0;
	}

	static int GetCount()
	{
		return nCount;
	}

private:
	int nData;
	static int nCount;
};

int C::nCount = 0;

int main()
{
	C a(5), b(10);

	//정적 멤버에 접근
	cout << a.GetCount() << endl;

	b.GetCount();
	cout << b.GetCount() << endl;

	cout << C::GetCount() << endl;
}