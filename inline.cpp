#include <iostream>
using namespace std;


//인라인함수
// 일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
// inline함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
// 실행 속도 향상을 위한 함수.
inline float square(float x)
{
	return x * x;
}


int main()
{
	int a = 5;
	cout << "한변의 길이가" << a << "인 정사각형의 넓이는?" << endl;

	float b = square(a);
	cout << b << endl;
	return 0;
}