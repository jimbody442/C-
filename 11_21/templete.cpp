#include <iostream>
using namespace std;


//class 혹은 typename 키워드를 사용
template <class Any>
Any sum(Any, Any);

int main()
{
	//함수 템플릿
	//구체적인 데이터형을 포괄할 수 있는 일반형	함수
	//함수로 보내지는 데이터혀엥 따라 자동으로 형식이 결정
	int a = 3;
	int b = 4;

	cout << sum(a, b) << endl;

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl;

	//cout << sum(a, c) << endl; 하나의	형식으로 결정되지 않아 오류 발생
	return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
	return a + b;
}