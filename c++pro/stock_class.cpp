#include <iostream>
#include "Stock.h"



int main()
{
	Stock temp;
	temp.acquire("baek", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();
}