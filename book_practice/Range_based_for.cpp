#include <iostream>
using namespace std;

int main()
{
	int aList[5] = {10, 20, 30, 40, 50};

	for (int i = 0; i < 5; i++)
	{
		cout << aList[i] << ' ';
	}
	cout << endl;


//범위 기반 C++ 스타일 반복문
// 각 요소의 값을 n에 복사한다.

	for (auto n : aList)	//값에 대한 복사
		cout << n << ' ';

	cout << endl;

	// n은 각 요소에 대한 참조이다.

	for(auto &n : aList)	// list의 참조
		cout << n << ' ';
	cout << endl;

	return 0;
}