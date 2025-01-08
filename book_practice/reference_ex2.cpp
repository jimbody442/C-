#include <iostream>

using namespace std;

//참조 전달이므로 호출자 변수의 값을 변경 할 수 있다.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int x = 10, y = 20;

	//참조 전달이며 두 변수의 값을 교환.

	Swap(x, y);

	cout << x <<  y << endl;
}

//c++에서는 가능하면 포인터 대신 참조형식을 사용.
//여러 이유로 c++에서는 참조자를 이용하는 것이 좋음/
