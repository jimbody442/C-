//맵은 "키/값" 쌍으로 요소 저장.
//키로 접근할 수 있으며, 각 키는 고유
// 키애 따라 오름차순으로 자동 정렬

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map <string, int> people;
	
	people = { {"John",32},{"Adele",45},{"Bo",29} };

	//map에 접근 , 키를 통해 접근 , 값을 출력
	cout << people["John"] << endl;

	cout << people["Adele"] << endl;

	//at함수를 통한 접근.
	cout << people.at("Adele")<<endl;
	cout << people.at("Bo") << endl;

	//값변경
	people["John"] = 50;
	//또는
	people.at("John") = 33;

	//요소 추가
	people["Jenny"] = 22;
	people["Liam"] = 24;
	people["Kasper"] = 20;
	people["Anja"] = 30;
	//또는
	people.insert({ "Minso",56 });
	
	//위에서 Jenny는 추가되었기 때문에 밑에 insert 내용은 추가 및 변경되지 않음.
	people.insert({ "Jenny",32 });

	//요소 제거.
	people.erase("John");
	//모든 요소 제거 
	// people.clear();

	//맵의 크기찾는 함수.
	cout << people.size() << endl;

	//맵이 비어있는지 확인하는 함수
	cout << people.empty() << endl;
	//count(key)함수를 이용하여 특정 요소의 유,무 확인.

	//맵  루프
	//auto는 컴파일러가 각 키-값 쌍에 대해 올바른 데이터 유형을 자동 결정.
	//.first는 키에 액세스 ,.second 는 값에 액세스.

	//오름차순 출력
	for (auto person : people) { 
		cout << person.first << " is :" << person.second << endl;
	}

	//내림차순 출력
	//map <string, int, greater<string> people =~~~
}