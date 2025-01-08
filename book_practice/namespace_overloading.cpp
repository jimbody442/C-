//네임스페이스 다중 정의가 가능하다.
//엄밀히 말하면 다중 정의보다는 전혀 다른 두 함수가 동명이인처럼 존재하는 것으로 인식.

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
	TestFunc();		//전역의 함수 실행.
	::TestFunc();	// 전역의 함수 실행.
	TEST::TestFunc();
	MYDATA::TestFunc();
}