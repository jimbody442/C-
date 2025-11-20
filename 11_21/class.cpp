#include <iostream>
#include "stock.h"




int main()
{
	//추상화와 클래스

	// 추상화란 : 공통된 특징을 간결한 방식으로, 복잡성을 줄여 표현하는 것

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);
	
	s1.show();
	s2.show();

	cout << "A와 B 중에서 주식 가격이 더 높은 회사는?" << endl;
	s1.topval(s2).show();
	return 0;
	
}