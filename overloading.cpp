#include <iostream>
#include "timeoverloading.h"

using namespace std;

int main()
{
	
	//연산자 오버로딩.
	//기본적으로 제공되는 연산자에 대해 사용자가 정의한 데이터형에 맞게 재정의하는 것.
	//Time 클래스에 대해 + 연산자를 오버로딩
	//operator +또는 - 또는 * 등을 사용하여 정의
	//자신만의 데이터형에 맞게 연산자를 오버로딩하여 사용

	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();



	Time total;
	total = day1.sum(day2);

	Time total2;
	total2 = day1 + day2;

	Time total3;
	total3 = day1.operator+(day2);

	total.show();
	total2.show();
	total3.show();
	return 0;
}