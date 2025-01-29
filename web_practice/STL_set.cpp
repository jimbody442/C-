//오름차순으로 자동 정렬
//동일하거나 중복된 값은 무시
//추가,제거는 가능하지만 값의 변경은 불가
//인덱싱 번호로 접근불가.

#include <iostream>
#include <set>

using namespace std;

set <string> cars;
set <int> numbers; //오름차순 정렬
set <int,greater<int>> denums;	//내림차순 정렬을 위해 set <데이터 타입, greater<데이터타입>>
int main()
{
	cars = { "Volvo","BMW","Ford","BMW","Mazda"};
	numbers = { 1,7,3,2,5,9 };
	denums = { 2,3,8,1,9,4,5 };
	for (string car : cars) {
		//오름차순 문자열 출력
		cout << car << endl;
	}

	for (int num : numbers) {
		//오름차순 숫자 출력
		cout << num << endl;
	}
	
	for (int denum : denums) {
		//내림차순 숫자 출력
		cout << denum << endl;
	}
	

	//요소추가
	cars.insert("Tesla");
	cars.insert("VW");
	cars.insert("Toyota");
	cars.insert("Audi");

	//요소 제거
	cars.erase("Volvo");
	//모든 요소 제거
	cars.clear();
	
	cout << cars.size() << endl;
	cout << cars.empty() << endl;
}