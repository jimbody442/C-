//Ŭ������ �ۼ��� �� ���� �����ڸ� �����ϸ� ����Ʈ ������ó�� �����Ϸ��� �˾Ƽ� ����� �־��ش�.
#include <iostream>

using namespace std;

class CMydata
{
private:
	int m_ndata=0;

public:
	CMydata() {
		cout << "CMydata()" << endl;
	}
	CMydata(const CMydata& rhs) : m_ndata(rhs.m_ndata)
	{
		this->m_ndata = rhs.m_ndata;
		cout << "CMydata(const CMydata &)" << endl;
	}

	int Getdata(void) const {
		return m_ndata;
	}
	void Setdata(int n_param)
	{
		m_ndata = n_param;
	}
};

int main()
{
	CMydata a;
	a.Setdata(10);

	CMydata b(a);
	cout << b.Getdata() << endl;
}



//�����򰥸����� this->�� ȣ���ϴ� �ν��Ͻ��� ������ �ǹ�?
//�������� this->�� CMydata b���� a�� &rhs�� ����.
//this->m_ndata�� b.m_ndata�� ���� �ǹ�?
