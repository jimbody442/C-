#include <iostream>
//using namespace std;

int main()
{
	char name[50];
	int age;

	std :: cout << "your name Enter : ";
	std :: cin >> name;

	std :: cout << "your age Enter : ";
	std :: cin >> age;

	std::cout << "나의 이름은 " << name << "이고," << age << "살 입니다." << std::endl;
}