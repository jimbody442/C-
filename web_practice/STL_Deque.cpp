//queuse�� FIFO
//��⿭�� ��Ұ� �� �߰��ǰ� �տ��� ����
//Deque�� ��� ���� ���� �߰��ϰ� ������ �� ����.
// �ε��� ��ȣ�� ��ҿ� �׼��� ����.

#include <iostream>
#include <deque>

using namespace std;

deque <string> cars = { "Volvo","BMW","Ford","Mazda" };
int main() {
	for (string car : cars) {
		cout << car << endl;
	}

	//Ư�� ��ҿ� ����
	cout << cars[0] << endl;

	cout << cars[1] << endl;
	
	cout << cars.at(2) << endl;
	
	cout << cars.at(3) << endl;

	//front,back�Լ��� �̿��Ͽ� ����
	cout << cars.front() << endl;
	cout << cars.back() << endl;

	//��� ����

	cars[0] = "Opel";
	cout << cars.at(0) << endl;
	
	cars.at(0) = "Volvo";
	cout << cars[0] << endl;

	//��� �߰�
	cars.push_front("Tesla");
	cars.push_back("VW");

	//��� ����
	cars.pop_back();
	cars.pop_front();

	//ũ��
	cout << cars.size() << endl;
	
	//��ũ�� ����ִ��� Ȯ��
	cout << cars.empty() << endl;

	//������ ���� ���
	for (string car : cars) {
		cout << car << endl;
	}
}