#include <iostream>
using namespace std;

class CTest
{
public:
	int m_nData;
	CTest() //������
	{
		//�ڵ� �ʱ�ȭ
		m_nData = 10;

	}
	~CTest() //�Ҹ��� 
	{
		cout << "CTest �Ҹ��� ȣ��" << endl;
		//�Ҹ��ڿ����� ��� �������� ���� ������� �ʴ´�.
	}

	//��� �Լ� ����� ���� �и�
	void PrintData(void);
};

void CTest::PrintData(void) //��� �Լ� ����
{
	//��� ������ ���
	cout << "m_nData : " << m_nData << endl;
}

int main()
{
	CTest t;
	t.PrintData();
	
	return 0;
	//����� ������ �Ҹ��� ȣ���Ͽ� �Ҹ�
}