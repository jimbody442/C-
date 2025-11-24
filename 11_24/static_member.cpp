#include <iostream>
using namespace std;

class Test
{
private:
	int data;
	static int count; //static 멤버 변수 선언
public:
	Test(int Param) : data(Param) { count++; }
	~Test() {};
	static int GetCount()
	{
		return count;
	}
	void resetCount()
	{
		count = 0;
	}
};

int Test::count = 0; //static 멤버 변수 정의 및 초기화

int main()
{
	Test a(5), b(10); //객체 2개를 생성하였으므로 static멤버 변수 count 값은 2가 됨
	cout << a.GetCount() << endl; //2출력
	b.resetCount(); //static 멤버 변수 count를 0으로 재설정

	//정적 함수는 객체 없이도 호출 가능
	cout << Test::GetCount() << endl; //0출력
	return 0;
}