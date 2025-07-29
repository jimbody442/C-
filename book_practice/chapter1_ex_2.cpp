#include <iostream>
using namespace std;

int main()
{
	char* List_1 = new char[12];
	cout << " 배열을 new 연산자를 통해 동적 할당합니다." << endl;
	cout << sizeof(List_1) << endl;
	cout << "배열 동적 할당된 크기를 해제" << endl;
	delete[] List_1;
}