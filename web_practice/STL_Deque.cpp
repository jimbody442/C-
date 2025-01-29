//queuse는 FIFO
//대기열의 요소가 끝 추가되고 앞에서 제거
//Deque는 요소 양쪽 끝에 추가하고 제거할 수 있음.
// 인데스 번호로 요소에 액세스 가능.

#include <iostream>
#include <deque>

using namespace std;

deque <string> cars = { "Volvo","BMW","Ford","Mazda" };
int main() {
	for (string car : cars) {
		cout << car << endl;
	}

	//특정 요소에 접근
	cout << cars[0] << endl;

	cout << cars[1] << endl;
	
	cout << cars.at(2) << endl;
	
	cout << cars.at(3) << endl;

	//front,back함수를 이용하여 접근
	cout << cars.front() << endl;
	cout << cars.back() << endl;

	//요소 변경

	cars[0] = "Opel";
	cout << cars.at(0) << endl;
	
	cars.at(0) = "Volvo";
	cout << cars[0] << endl;

	//요소 추가
	cars.push_front("Tesla");
	cars.push_back("VW");

	//요소 제거
	cars.pop_back();
	cars.pop_front();

	//크기
	cout << cars.size() << endl;
	
	//데크가 비어있는지 확인
	cout << cars.empty() << endl;

	//루프를 통한 출력
	for (string car : cars) {
		cout << car << endl;
	}
}