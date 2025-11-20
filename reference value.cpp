#include <iostream>
using namespace std;

//참조 (reference)
//미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
//함수의 매개변수에 사용
void swapA(int& a, int& b);
void swapB(int* a, int* b);
void swapC(int a, int b);
int main()
{
	int a;
	int& b = a;
}

//참조로 전달하는 함수
void swapA(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//포인터로 전달하는 함수
void swapB(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//값으로	전달하는 함수
void swapC(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}