//���� "Ű/��" ������ ��� ����.
//Ű�� ������ �� ������, �� Ű�� ����
// Ű�� ���� ������������ �ڵ� ����

#include <iostream>
#include <map>

using namespace std;

int main()
{
	map <string, int> people;
	
	people = { {"John",32},{"Adele",45},{"Bo",29} };

	//map�� ���� , Ű�� ���� ���� , ���� ���
	cout << people["John"] << endl;

	cout << people["Adele"] << endl;

	//at�Լ��� ���� ����.
	cout << people.at("Adele")<<endl;
	cout << people.at("Bo") << endl;

	//������
	people["John"] = 50;
	//�Ǵ�
	people.at("John") = 33;

	//��� �߰�
	people["Jenny"] = 22;
	people["Liam"] = 24;
	people["Kasper"] = 20;
	people["Anja"] = 30;
	//�Ǵ�
	people.insert({ "Minso",56 });
	
	//������ Jenny�� �߰��Ǿ��� ������ �ؿ� insert ������ �߰� �� ������� ����.
	people.insert({ "Jenny",32 });

	//��� ����.
	people.erase("John");
	//��� ��� ���� 
	// people.clear();

	//���� ũ��ã�� �Լ�.
	cout << people.size() << endl;

	//���� ����ִ��� Ȯ���ϴ� �Լ�
	cout << people.empty() << endl;
	//count(key)�Լ��� �̿��Ͽ� Ư�� ����� ��,�� Ȯ��.

	//��  ����
	//auto�� �����Ϸ��� �� Ű-�� �ֿ� ���� �ùٸ� ������ ������ �ڵ� ����.
	//.first�� Ű�� �׼��� ,.second �� ���� �׼���.

	//�������� ���
	for (auto person : people) { 
		cout << person.first << " is :" << person.second << endl;
	}

	//�������� ���
	//map <string, int, greater<string> people =~~~
}