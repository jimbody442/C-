#include <stdio.h>
#include <iostream>
using namespace std;

// ���� (����� ���Ҽ�)
void TestFucn(void)
{
	cout << "::TestFucn" << endl;
}

namespace TEST
{
	// ���ӽ����̽� TEST
	void TestFucn(void)
	{
		cout << "TEST::TestFucn" << endl;
	}
}

namespace MYDATA
{
	// namespace MYDATA
	void TestFucn(void)
	{
		cout << "MYDATA::TestFucn" << endl;

	}
}

int main()
{
	TestFucn(); // ���� ���ӽ����̽��� TestFucn ȣ��(������)
	::TestFucn(); // ���� ���ӽ����̽��� TestFucn ȣ��(�����)
	TEST::TestFucn();
	MYDATA::TestFucn();
}