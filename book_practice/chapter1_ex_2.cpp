#include <iostream>
using namespace std;

int main()
{
	char* List_1 = new char[12];
	cout << " �迭�� new �����ڸ� ���� ���� �Ҵ��մϴ�." << endl;
	cout << sizeof(List_1) << endl;
	cout << "�迭 ���� �Ҵ�� ũ�⸦ ����" << endl;
	delete[] List_1;
}