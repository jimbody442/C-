#include <iostream>

using namespace std;

//���� �����̹Ƿ� ȣ���� ������ ���� ���� �� �� �ִ�.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int x = 10, y = 20;

	//���� �����̸� �� ������ ���� ��ȯ.

	Swap(x, y);

	cout << x <<  y << endl;
}

//c++������ �����ϸ� ������ ��� ���������� ���.
//���� ������ c++������ �����ڸ� �̿��ϴ� ���� ����/
