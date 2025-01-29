#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <string> cars = { "volvo","BMW","Ford","Mazda" };

	for (string car : cars) {
		cout << car << endl;
	}

	cout << cars.front() << endl;

	cout << cars.back() << endl;

	cout << cars.at(1) << endl;

	cout << cars[1] << endl;

	cout << "++++++++++++����+++++++++++" << endl;
	//���� ��� ���� 
	cars.at(1) = "Ferary";
	cars[2] = "Auid";
	
	//���� ��� �߰�
	cars.push_back("Tesla");
	cars.push_back("Handea");
	cars.push_back("kia");

	cars.pop_back();

	//for-each����
	//cars�� ����Ҹ� car�� ����.
	for (string car : cars) {
		cout << car << endl;
	}

	//���� ũ�⸦ �˾Ƴ��� �Լ� .size()
	cout << cars.size() << endl;

	//���Ͱ� ����ִ��� Ȯ��
	cout << cars.empty() << endl;

}