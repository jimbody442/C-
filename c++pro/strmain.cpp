
#include <iostream>
#include "Starcft.h"

using namespace std;
int main() {

	Marine* marines[100];


	marines[0] = new Marine(2, 3,"Marine 2");	//new�� ��ü�� �������� �����԰� ���ÿ� �ڵ����� �����ڵ� ȣ��.
	marines[1]= new Marine (3, 5,"Marine 1");

	marines[0]->show_status();
	marines[1]->show_status();

	cout << endl << "����1�� ���� 2�� ����" << endl;
	marines[0]->be_attacked(marines[1]->attack());	//marine1�� acctack �Լ��� ȣ���Ͽ� damage�� �����Ͽ� ���� �ް� ���� ����
											// marrine2.be_attacked�� �Լ��� �Ű������� ����.
	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];
}