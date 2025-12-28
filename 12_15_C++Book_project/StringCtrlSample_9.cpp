#include "stdafx.h"
#include "MyStringEx.h"

int main()
{
	CMyStringEx strTest;
	strTest.SetString("I am boy");
	cout << strTest << endl;

	int nIndex = strTest.Find("am");
	cout << "'am'ÀÇ À§Ä¡ : " << nIndex << endl;
	return 0;
}