//���� ��� ����
#include <iostream>
using namespace std;

int main()
{
	int nInput = 0;
	cout << "11�̻��� ������ �Է��ϼ���" << endl;
	cin >> nInput;

	if (nInput >= 11)
	{
		cout << nInput << "�� 11�̻��� �����Դϴ�." << endl;
	}
	else
	{
		cout << nInput << "�� 11�̻��� ������ �ƴմϴ�." << endl;
	}
	return 0;
}