#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<string> cars = { "volvo","BMW","Ford","Mazda" };

	for (string car : cars) {
		cout << car << endl;
	}

	//첫번째 요소 출력
	cout << cars.front() << endl;

	//마지막 요소 출력
	cout << cars.back() << endl;


	//함수를 이용한 요소 변경
	cars.front() = "Opel";
	cars.back() = "Toyota";

	cout << cars.front() << endl;
	cout << cars.back() << endl;

	//요소 추가.
	cars.push_front("Tesla");
	cars.push_back("VW");

	//요소 제거
	cars.pop_back();
	cars.pop_front();

	//목록 크기
	cout << cars.size() << endl;

	//목록이 비어있는지 확인
	//비어있다면 True =1 , 비어있지 않다면 0 =False
	cout << cars.empty() << endl;
	
	
}