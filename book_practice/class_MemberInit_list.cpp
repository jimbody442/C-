//������ �ʱ�ȭ ���.
//������ �ʱ�ȭ ����� �ݷ�(:)�� ����ؾ� ��.
// ���� �ʱ�ȭ �ؾ��ϴ� ������ ���� ���� ��ǥ�� ��� �̾� �ۼ�.
// ������ ��������� ������ �����̸� �ݵ�� �ʱ�ȭ ����� �̿��Ͽ� �ʱ�ȭ!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
using namespace std;

class Ctest
{
public:
	Ctest() :m_data(10), m_data2(20) { }

	// �� ���� ��� ������ ����
	int m_data;
	int m_data2;


	void PrintData(void)
	{
		cout << m_data << endl;
		cout << m_data2 << endl;
	}
};

//����� �ڵ�
int main()
{
	Ctest t;
	t.PrintData();
}