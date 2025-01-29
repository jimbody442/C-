#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<string> cars = { "volvo","BMW","Ford","Mazda" };

	for (string car : cars) {
		cout << car << endl;
	}

	//ù��° ��� ���
	cout << cars.front() << endl;

	//������ ��� ���
	cout << cars.back() << endl;


	//�Լ��� �̿��� ��� ����
	cars.front() = "Opel";
	cars.back() = "Toyota";

	cout << cars.front() << endl;
	cout << cars.back() << endl;

	//��� �߰�.
	cars.push_front("Tesla");
	cars.push_back("VW");

	//��� ����
	cars.pop_back();
	cars.pop_front();

	//��� ũ��
	cout << cars.size() << endl;

	//����� ����ִ��� Ȯ��
	//����ִٸ� True =1 , ������� �ʴٸ� 0 =False
	cout << cars.empty() << endl;
	
	
}