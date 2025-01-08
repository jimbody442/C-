//new와 delete연산자.
//동적할당,해제 연산자.
// new연산자를 malloc()함수와 비교했을 때 도드라진 특징 중 하나는 "메모리 크기를 지정하지 않는다"
#include <iostream>

int main()
{
	//인스턴스만 동적으로 생성하는 경우
	int* pdata = new int;

	// 초기값을 기술하는 경우
	int* pNewdata = new int(10);

	*pdata = 5;
	std::cout << *pdata << std::endl;
	std::cout << *pNewdata << std::endl;

	delete pdata;
	delete pNewdata;
	
	return 0;

}