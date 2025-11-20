#include <iostream>



#ifndef STRUCT_H
using namespace std;

struct MyStruct
{
	string name;
	int age;
};

void display(MyStruct&);

#endif //STRUCT_H

//헤더 파일에서는 구조체 선언과 함수 원형 선언만 포함