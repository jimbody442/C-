//�ĺ��� �˻� ���� : ���� ��� ����

#include <iostream>
using namespace std;

int nData(20);

int main()
{
	int nData(10); //��������
	cout << "�������� nData : " << nData << endl; //�������� ���
	
	cout << " �������� nData : " << ::nData << endl; //�������� ���
}