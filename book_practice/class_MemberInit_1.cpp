#include <iostream>
using namespace std;


//������ �ڵ�
class Ctest
{
public:
	//Ctest Ŭ������ ������ �Լ� ���� �� ����
	Ctest()
	{
		//�ν��Ͻ� �����Ǹ� ��� �����͸� �ڵ����� �ʱ�ȭ
		cout << "Ctest() : ������ �Լ� " << endl;
		m_data = 10;
	}
	int m_data;

	void PrintData(void)
	{
		cout << m_data << endl;
	}
};

//����� �ڵ�
int main()
{
	Ctest m;
	m.PrintData();
}
