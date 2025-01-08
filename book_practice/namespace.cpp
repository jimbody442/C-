//name sapce의 중첩

//namespace 안에 또 다른 namespace가 속할 수 있다.
//이름이 같은 변수나 함수라도 속해 있는 namespace가 다르면 전혀 다른 개체로 인식.
#include <iostream>
using namespace std;

namespace TEST
{
	int g_ndata = 100;
	namespace DEV
	{
		int g_ndata = 200;
		namespace WIN
		{
			int g_ndata = 300;
		}
	}
}

int main()
{
	cout << TEST::g_ndata << endl;
	cout << TEST::DEV::g_ndata << endl;
	cout << TEST::DEV::WIN::g_ndata << endl;
}