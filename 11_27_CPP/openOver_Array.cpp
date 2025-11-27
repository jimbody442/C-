#include <iostream>
using namespace std;

class Array
{
private:
	//배열 메모리
	int* data;

	int size;
public:

	Array(int nSize)
	{
		//전달된 개수만큼 int 자료를 담을 수 있는 메모리 확보
		data = new int[nSize];
		memset(data, 0, sizeof(int) * nSize);
	}

	~Array()
	{
		delete data;
	}

	//상수형 참조인 경우 //함수 내에서 멤버 변수를 변경하지 않음, 오로지	읽기 전용
	int operator [](int index) const
	{
		cout << "상수형 참조 operator[] 호출" << endl;
		return data[index];
	}

	//일반적인 배열 연산자 , 멤버 변수를 변경할 수 있음, 읽기/쓰기 모두 가능
	int& operator [](int index)
	{
		cout << "일반형 참조 operator[] 호출" << endl;
		return data[index]; 
	}


};


void Func(const Array& rParam)
{
	cout << "Func() 호출" << endl;
	//상수형 참조 연산자 호출 operator[](int index) const 호출
	cout << rParam[3] << endl;
}

int main()
{
	Array arr(5);
	for (int i = 0; i < 5; i++)
	{
		//일반형 참조 연산자 호출 operator[](int index) 호출
		arr[i] = i * 10;
	}

	Func(arr);

	return 0;
}