//내가 생각하는 부족한점 : 포인터와 참조자를 헷갈려하는 것.
// 내용을 자세히 익힐 필요가 있음!

// 참조자 형식 c에는 없는 형식, 포인터와 구조적으로 비슷.
//@@@@@@@@@@@@ 선언과 동시에 반드시 초기화 과정이 있어야한다 @@@@@@@@@@@@@@

// 형식 &이름 = 원본;

//  "상슈에는 참조자를 선언 할 수 없다"

// int *Pdate =&3; //불가능
// int &Rdate = 3; //상수에 대한 참조는 불가능.
// int &rdate; //침조 운본이 없으므로 불가능.

//포인터의 일반적인 사용 문제 몇 가지를 문법적으로 차단한 것으로 "겉으로 보기에는 전혀 포인터로 보이지 않는다"

#include <iostream>

using namespace std;

int main()
{
	int nData = 10;

	//nData 변수에 대한 참조.
	int& nRef = nData;

	//참조자의 값 변경은 원본값 변경!!!!
	nRef = 20;

	cout << nData << endl;

	cout << &nData << endl;	//주소

	cout << &nRef << endl;	//주소
	

	//포인터를 쓰는 것과 비슷하다.
	int* pDate = &nData;
	*pDate = 30;
	
	cout << pDate << endl; //주소

	cout << nData << endl;
	
	return 0;
}

//참조는 주소라고 생각!!!
















