#include <iostream>

using namespace std;
//오버로딩: 이름은 같지만 매개변수의 데이터 타입에 따라 결정되어 함수 실행.
void print(int x) { cout << "int  :" << x << endl; }
//void print(char x) { cout << "char  :" << x << endl; }
void print(double x) { cout << "double  :" << x << endl; }

int main()
{
	int a = 1;
	char b = 'c';
	double c = 3.2f;

	print(a);
	print(b);
	print(c);

	return 0;
}

//같은 데이터형이 없다면 근접한 데이터형으로 연결된다 .관련 연결은 구글 참조.
// char같은 경우는 int로 연결.
//double은 찾아 갈수 있는 데이터 형이 없기 때문에 오류 발생, float같은경우는 int로 연결.

