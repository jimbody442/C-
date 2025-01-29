//Queuse�� FIFO��� �Ҹ��� Ư�� ������ ���� ���� ��� ����.
//�ε��� ��ȣ�� �׼������� ����.

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue <string> cars;

	//��� �߰�
	cars.push("Volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");

	cout << cars.front() << endl;
	cout << cars.back() << endl;

	//��� ����
	cars.front() = "Tesla";
	cars.back() = "VW";

	cout << cars.front() << endl;

	cout << cars.back() << endl;

	//������� 

	cars.pop(); //�տ����� ��Һ��� ����.
	cout << cars.front() << endl;

	//ť�� ũ��
	cout << cars.size() << endl;
	
	//��⿭ ����ִ��� Ȯ��
	cout << cars.empty() << endl;
}