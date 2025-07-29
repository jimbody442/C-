//식별자 검색 순서 : 현재 블록 범위

#include <iostream>
using namespace std;

int nData(20);

int main()
{
	int nData(10); //지역변수
	cout << "지역변수 nData : " << nData << endl; //지역변수 출력
	
	cout << " 전역변수 nData : " << ::nData << endl; //전역변수 출력
}