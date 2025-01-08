//�Ű������� ���Ǵ� ���� ������.
#include <iostream>

using namespace std;

class CTdata {
public:
	CTdata(int param) :m_ndata(param)
	{
		cout << "CTdata(int)" << endl;

	}
	CTdata(const CTdata& rhs) = delete;
	//�б� ������ ����� �޼���
	int Getdata() const {
		return m_ndata;
	}
	void Setdata(int param) {
		m_ndata = param;
	}
private:
	int m_ndata;


};

void TestFunc(CTdata &param)
{
	cout << "TestFunc()" << endl;

	param.Setdata(20);
}


int main()
{
	cout << "********Begin***********" << endl;
	CTdata a(10);
	TestFunc(a);

	cout << "a:" << a.Getdata() << endl;

	cout << "end" << endl;
}