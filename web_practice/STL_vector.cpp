#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <string> cars = { "volvo","BMW","Ford","Mazda" };

	for (string car : cars) {
		cout << car << endl;
	}

	cout << cars.front() << endl;

	cout << cars.back() << endl;

	cout << cars.at(1) << endl;

	cout << cars[1] << endl;

	cout << "++++++++++++변경+++++++++++" << endl;
	//벡터 요소 변경 
	cars.at(1) = "Ferary";
	cars[2] = "Auid";
	
	//벡터 요소 추가
	cars.push_back("Tesla");
	cars.push_back("Handea");
	cars.push_back("kia");

	cars.pop_back();

	//for-each루프
	//cars의 각요소를 car에 대입.
	for (string car : cars) {
		cout << car << endl;
	}

	//벡터 크기를 알아내는 함수 .size()
	cout << cars.size() << endl;

	//벡터가 비어있는지 확인
	cout << cars.empty() << endl;

}