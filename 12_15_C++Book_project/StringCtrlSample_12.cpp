#include "MyStringEx.h"
#include "stdafx.h"


int main()
{
	CMyString strTest1;
	strTest1.SetString("멍멍이아들");
	cout << strTest1 << endl;
	CMyStringEx strTest;
	strTest.SetString("멍멍이아들");
	cout << strTest << endl;

	return 0;
}
//가상함수 OnSetString 함수를 재정의하여 "멍멍이아들"이라는 문자열이 전달되면 "착한사람"으로 변경하도록 구현되어 있음.
//MyString에서는 "멍멍이아들"이 출력되지만 MyStringEx에서는 "착한사람"이 출력됨.
//미래의 기능 확장을 위해서 부모 클래스에서 가상함수로 OnSetString 함수를 정의하고 자식 클래스에서 재정의하여 기능을 확장하는 방법을 보여줌.