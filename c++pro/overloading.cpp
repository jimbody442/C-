#include <iostream>

using namespace std;
//�����ε�: �̸��� ������ �Ű������� ������ Ÿ�Կ� ���� �����Ǿ� �Լ� ����.
void print(int x) { cout << "int  :" << x << endl; }
//void print(char x) { cout << "char  :" << x << endl; }
void print(double x) { cout << "double  :" << x << endl; }

int main()
{
	int a = 1;
	char b = 'c';
	double c = 3.2f;

	print(a);
	print(b);
	print(c);

	return 0;
}

//���� ���������� ���ٸ� ������ ������������ ����ȴ� .���� ������ ���� ����.
// char���� ���� int�� ����.
//double�� ã�� ���� �ִ� ������ ���� ���� ������ ���� �߻�, float�������� int�� ����.

