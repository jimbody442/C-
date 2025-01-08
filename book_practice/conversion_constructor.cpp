#include <iostream>

using namespace std;

class CTest
{
public:
	
	//�Ű������� �ϳ����� �����ڴ� ����ȯ�� ����.
	//������ ���������� �Ұ����ϵ��� ����.
	explicit CTest(int nparam) : m_ndata(nparam)
	{
		cout << "CTest(int)" << endl;
	}
	//������ ��ȯ �����ڰ� ����� �𸣰� ȣ��� ���ɼ��� ����.


	CTest(int nparam) : m_ndata(nparam)
	{
		cout << "CTest(int)" << endl;
	}
	~CTest()
	{
		cout << "~CTest()" << endl;
	}

	CTest(const CTest& rhs) : m_ndata(rhs.m_ndata)
	{
		cout << "CTest(const CTest &)" << endl;
	}

	int Getdata() const
	{
		return m_ndata;
	}
	
	void Setdata(int nparam)
	{
		m_ndata = nparam;
	}
private:
	int m_ndata = 0;
};

// ����� �ڵ�
//�Ű������� Ŭ���� �����̸�, ���������� ��ȯ ����.
void TestFunc(const CTest &param)
{
	cout << "TestFunc():" << param.Getdata() << endl;
}




int main()
{
	cout << "*******Begin*******" << endl;
	//int �ڷ������� CTest �������� ��ȯ�� �� �ִ�.
	TestFunc(5);

	cout << "********end*******" << endl;
	return 0;
}