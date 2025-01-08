//���ӽ����̽� ���� ���ǰ� �����ϴ�.
//������ ���ϸ� ���� ���Ǻ��ٴ� ���� �ٸ� �� �Լ��� ��������ó�� �����ϴ� ������ �ν�.

#include <iostream>

using namespace std;

void TestFunc(void)
{
	cout << "::TestFunc()" << endl;
}

namespace TEST
{
	//TEST in namespace
	void TestFunc(void)
	{
		cout << "TEST::TestFunc()" << endl;
	}
	
}

namespace MYDATA
{
	//MYDATA in namespace
	void TestFunc(void)
	{
		cout << "DATA::Test()" << endl;
	}
}

int main()
{
	TestFunc();		//������ �Լ� ����.
	::TestFunc();	// ������ �Լ� ����.
	TEST::TestFunc();
	MYDATA::TestFunc();
}