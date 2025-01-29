//stack은 LIFO라고 불리는 특정순서로 여러 요소를 저장.
//인덱스 번호로 액세스되지 않음.

#include <iostream>
#include<stack>

using namespace std;

stack <string> cars;

//요소추가
int main() {


	cars.push("volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");

	//마지막 저장된 요소 출력
	cout << cars.top() << endl;

	//최상위(마지막) 요소 변경
	cars.top() = "Tesla";

	cout << cars.top() << endl;

	//최상위 요소 제거
	cars.pop();
	
	cout << cars.top() << endl;

	cout << cars.size() << endl;

	cout << cars.empty() << endl;

}