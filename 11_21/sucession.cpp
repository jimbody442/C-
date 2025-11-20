#include <iostream>
#include "timeoverloading.h"
using namespace std;

int main()
{
	//1. 기존의 클래스에 새로운 기능을 추가할 때 기존 코드를 수정하지 않고 확장할 수 있음
	//2. 클래스가 나타내고 있는 데이터에 다른 것을 추가할 수 있음
	//3. 클래스 메서드가 동작하는 방식을 변경할 수 있음
	
	NewTime t1();
	NewTime t2(1, 2, 30);
	return 0;

}