//delete ���� ����Ͽ� ������ ���� �߻� �ڵ�.
#include <iostream>

using namespace std;

class CMydata
{
private:
	int m_nData;

public:
	CMydata() : m_nData(0)
	{

	}
	int GetData(void) {
		return m_nData;
	}
	
	void SetData(int nParam) {
		m_nData = nParam;
	}

	//�Ǽ��� double �ڷ��� ���μ��� �Ѿ���� ��츦 �����Ѵ�.
	void SetData(double nParam) = delete;

};

int main()
{
	CMydata a;
	
	//CMydata::SetData(int)�޼��尡 ȣ��ȴ�.
	a.SetData(10);

	cout << a.GetData() << endl;

	CMydata b;
	
	//CMydata::SetData(double) �޼��尡 ȣ��ȴ�.
	b.SetData(5.5);
	//double �ڷ����� �Ѿ�ԵǸ� ����.(delete)
	cout << b.GetData() << endl;

	return 0;
}