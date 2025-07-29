#include <iostream>
using namespace std;
int nData = 200;

namespace TEST
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl;
	}
}



int main()
{
	TEST::TestFunc(); // TEST 네임스페이스의 nData 출력

	cout << ::nData << endl; //명시적 전역 네임스페이스의 nData 출력
}