//상위 블록 범위
#include <iostream>
using namespace std;

int main()
{
	int nInput = 0;
	cout << "11이상의 정수를 입력하세요" << endl;
	cin >> nInput;

	if (nInput >= 11)
	{
		cout << nInput << "는 11이상의 정수입니다." << endl;
	}
	else
	{
		cout << nInput << "는 11이상의 정수가 아닙니다." << endl;
	}
	return 0;
}