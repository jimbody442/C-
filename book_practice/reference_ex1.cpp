#include <iostream>
using namespace std;

void  TestFunc(int& rParam);

int main()
{
	int nData = 0;

	//������ ���� �μ� ����
	TestFunc(nData);

	cout << nData << endl;
}

//�Ű������� int�� ���� ���� ����
void TestFunc(int& rparam)
{
	//��ȣ���� �Լ����� ������ ���� ����
	rparam = 100;
}

//�Լ��� �Ű������� �������� ��� ���� ū �������� ȣ���� �ڵ常 ������ �Ű������� ���� �����̶�� ����� ���� �� �� ����.

// !!!!!!!!!!!!!!!!!!!!!!  c++������ ȣ���� �ڵ常 ���� �Լ��� ������ Ȯ���ؼ��� �ȵȴ�!!!!!!!!!!!!!!!!!!!!!!
