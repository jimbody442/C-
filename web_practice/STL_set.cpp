//������������ �ڵ� ����
//�����ϰų� �ߺ��� ���� ����
//�߰�,���Ŵ� ���������� ���� ������ �Ұ�
//�ε��� ��ȣ�� ���ٺҰ�.

#include <iostream>
#include <set>

using namespace std;

set <string> cars;
set <int> numbers; //�������� ����
set <int,greater<int>> denums;	//�������� ������ ���� set <������ Ÿ��, greater<������Ÿ��>>
int main()
{
	cars = { "Volvo","BMW","Ford","BMW","Mazda"};
	numbers = { 1,7,3,2,5,9 };
	denums = { 2,3,8,1,9,4,5 };
	for (string car : cars) {
		//�������� ���ڿ� ���
		cout << car << endl;
	}

	for (int num : numbers) {
		//�������� ���� ���
		cout << num << endl;
	}
	
	for (int denum : denums) {
		//�������� ���� ���
		cout << denum << endl;
	}
	

	//����߰�
	cars.insert("Tesla");
	cars.insert("VW");
	cars.insert("Toyota");
	cars.insert("Audi");

	//��� ����
	cars.erase("Volvo");
	//��� ��� ����
	cars.clear();
	
	cout << cars.size() << endl;
	cout << cars.empty() << endl;
}