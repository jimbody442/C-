//stack�� LIFO��� �Ҹ��� Ư�������� ���� ��Ҹ� ����.
//�ε��� ��ȣ�� �׼������� ����.

#include <iostream>
#include<stack>

using namespace std;

stack <string> cars;

//����߰�
int main() {


	cars.push("volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");

	//������ ����� ��� ���
	cout << cars.top() << endl;

	//�ֻ���(������) ��� ����
	cars.top() = "Tesla";

	cout << cars.top() << endl;

	//�ֻ��� ��� ����
	cars.pop();
	
	cout << cars.top() << endl;

	cout << cars.size() << endl;

	cout << cars.empty() << endl;

}