#include <iostream>

using namespace std;

class CMy
{
public:
	CMy(int param)
	{
		m_ndata = new int;		//�ּ�
		*m_ndata = param;		//��
	}
	//���� ������ ���� �� ����.
	CMy(const CMy& rhs)
	{
		cout << "CMy(const CMy&)" << endl;

		//�޸� �Ҵ�
		m_ndata = new int;

		//�����Ͱ� ����Ű�� ��ġ�� ���� ����.
		*m_ndata = *rhs.m_ndata;
	}
	
	~CMy()
	{
		delete m_ndata;
	}

	CMy& operator=(const CMy& rhs)
	{
		*m_ndata = *rhs.m_ndata;

		//��ü �ڽſ� ���� ������ ��ȯ�Ѵ�.
		return *this;
	}
	
	int Getdata()
	{
		if (m_ndata != NULL)
			return *m_ndata;

		return 0;
	}

private:
	int *m_ndata = nullptr;
};

int main()
{
	CMy a(10);
	CMy b(20);

	//�ܼ� ������ �õ��ϸ� ��� ����� ���� �״�� ����.
	a = b;
	cout << a.Getdata() << endl;
	
	return 0;

}