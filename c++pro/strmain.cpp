
#include <iostream>
#include "Starcft.h"

using namespace std;
int main() {

	Marine* marines[100];


	marines[0] = new Marine(2, 3,"Marine 2");	//new는 객체를 동적으로 생성함고 동시에 자동으로 생성자도 호출.
	marines[1]= new Marine (3, 5,"Marine 1");

	marines[0]->show_status();
	marines[1]->show_status();

	cout << endl << "마린1이 마린 2를 공격" << endl;
	marines[0]->be_attacked(marines[1]->attack());	//marine1의 acctack 함수를 호출하여 damage를 리턴하여 값을 받고 받은 값을
											// marrine2.be_attacked의 함수에 매개변수로 전달.
	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];
}