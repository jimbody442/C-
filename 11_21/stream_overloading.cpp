#include <iostream>
#include "timeoverloading.h"

using namespace std;

int main() {
	//스트림 오버로딩
	//C++에서 입출력 스트림(예: cout, cin)은 다양한 데이터 형식을 처리할 수 있도록 오버로딩되어 있음
	//iostream에 <<, >> 연산자가 다양한 데이터 형식에 대해 오버로딩되어 있음
	//사용자 정의 데이터 형식에 대해서도 스트림 오버로딩을 구현할 수 있음
	Time t1(3, 45);
	
	t1.show();

	int x = 5;
	int y = 8;

	cout << t1;
}