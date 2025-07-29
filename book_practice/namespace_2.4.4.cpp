#include <stdio.h>
#include <iostream>
using namespace std;

// 전역 (개념상 무소속)
void TestFucn(void)
{
	cout << "::TestFucn" << endl;
}

namespace TEST
{
	// 네임스페이스 TEST
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
	TestFucn(); // 전역 네임스페이스의 TestFucn 호출(묵시적)
	::TestFucn(); // 전역 네임스페이스의 TestFucn 호출(명시적)
	TEST::TestFucn();
	MYDATA::TestFucn();
}