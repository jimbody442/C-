//���� ������ priavate
#include <iostream>
using namespace std;

class CMyData
{
	//�⺻ ���� �����ڴ� private �̴�
	int m_nData; //��� ������

public:
	int GetData(void)
	{
		return m_nData; //��� ������ ����
	}
	void SetData(int nParam)
	{
		m_nData = nParam; // ��� ������ �����Ͽ� �� ��ȭ
	}
};

int main()
{
	CMyData data; // CMyData ��ü ����
	data.SetData(10); // SetData() ��� �Լ� ȣ��, �����͸� 10���� ����
	cout << "�Լ��� �̿��Ͽ� ���� ������ m_ndata�� �� : " <<data.GetData()<< endl; // GetData() ��� �Լ� ȣ��, m_nData ���� ��ȯ
	// data.m_nData = 20; // ���� �߻�, private ��� �����Ϳ� ���� ������ �� ����
}