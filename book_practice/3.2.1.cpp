//�����ڿ� �Ҹ���
#include <iostream>
using namespace std;

class CTest
{
public:
	//��� ������ ����
	int m_nData;

	CTest() //�����ڷ� �ڵ� ȣ��
	{
		cout << "CTest ������ ȣ��" << endl;
		m_nData = 10;
	}



	void PrintData(void)
	{
		//��� ������ �����ϰ� ���� ���
		cout << "m_nData : " << m_nData << endl;
	}
};

int main()
{
	CTest t;
	t.PrintData();
}
