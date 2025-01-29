//Queuse는 FIFO라고 불리는 특정 순서로 여러 개의 요소 저장.
//인데스 번호로 액세스하지 않음.

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue <string> cars;

	//요소 추가
	cars.push("Volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");

	cout << cars.front() << endl;
	cout << cars.back() << endl;

	//요소 변경
	cars.front() = "Tesla";
	cars.back() = "VW";

	cout << cars.front() << endl;

	cout << cars.back() << endl;

	//요소제거 

	cars.pop(); //앞에서의 요소부터 제거.
	cout << cars.front() << endl;

	//큐의 크기
	cout << cars.size() << endl;
	
	//대기열 비어있는지 확인
	cout << cars.empty() << endl;
}