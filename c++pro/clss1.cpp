#include <iostream>

using namespace std;

int main()
{
	//�߻�ȭ�� Ŭ����
	int a = 4;
	int b = 3;

	int* a_b = &a;			//�����ʹ� �⺻���� 8��Ʈ.

	int *b_b = &b;
	
	cout << sizeof(a_b) << "byte" << endl;
}