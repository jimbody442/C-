//���� ��ü�� ������ �Ҹ�
#include <iostream>
using namespace std;

class CTest
{
	int m_nData; //��� ������
public:
	CTest()
	{
		cout << "CTest ������ ȣ��" << endl;
	}

	~CTest()
	{
		cout << "CTest �Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	cout << "Begin main" << endl;

	CTest* pData = new CTest;
	cout << "CTest ��ü ���� �Ϸ� " << endl;

	delete pData; //���� �Ҵ�� ��ü�� �Ҹ��� ȣ��
	cout << "CTest ��ü �Ҹ� �Ϸ�" << endl;
	cout << "End main" << endl;
	return 0;
}