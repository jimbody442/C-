#include <iostream>

using namespace std;

int main()
{
	//추상화와 클래스
	int a = 4;
	int b = 3;

	int* a_b = &a;			//포인터는 기본으로 8비트.

	int *b_b = &b;
	
	cout << sizeof(a_b) << "byte" << endl;
}