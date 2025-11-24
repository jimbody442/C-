#include <iostream>
using namespace std;

class Test
{
private:
	int& ref; //참조자 멤버 변수

public:
	Test(int& r) : ref(r) //생성자 초기화 목록을 사용하여 참조자 초기화
	{
	}

	//Test(int& r) { ref = r) // 이 구문은 선언 및 정의가 아닌 연산이므로	참조자 멤버 변수를 초기화할 수 없음
	int GetData(void) { return ref; }

};


int main()
{
	//참조자는 선언과 동시에 반드시 초기화 필요
	// 생성자 초기화 목록을 사용하여 초기화
	int a = 10;
	Test t(a); //참조자 멤버 변수가 a를 참조하도록 초기화, 즉 ref은 a의 값을 참조(이름만 다를뿐이지 값과 주소는 동일)

	cout << "t.GetData(): " << t.GetData() << endl; //10

	//참조자 멤버 변수를 통해 원본 변수 a의 값을 변경
	a = 20;
	cout << "t.GetData(): " << t.GetData() << endl; //20

	//private 멤버 변수의 ref값을 직접 변경하지 않아도	원본 변수 a의 값이 변경되면 ref가 참조하는 값도 변경됨
}

