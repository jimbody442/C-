// r-value 참조에 대한 설명
// 연산자의 두 피연산자 중 오른쪽 위치한 연산자를 r-value라고 한다.
// 일반적인 변수와 상수 모두 해당될 수 있음
// &&가 두 번 연속해서 등장한다는 점이 다름

//int &&rdata = 3;

#include <iostream>
using namespace std;

int TestFunc(int nParam)
{
	int nResult = nParam * 2;

	return nResult;
}

int main()
{
	int nInput = 0;
	cout << "Input number :" << endl;
	cin >> nInput;

	//산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
	int&& rdata = nInput + 5;
	cout << rdata << endl;

	//함수 반환으로 만들어진 임시 객체에 대한 r-value 참조

	int&& result = TestFunc(10);

	//값을 변경할 수 있다.
	result += 10;
	cout << result << endl;

	return 0;

}