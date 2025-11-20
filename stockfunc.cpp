#include "stock.h"
#include <iostream>

Stock::Stock(const string co, int n, float pr)
{
	name = co;
	shares = n;
	share_price = pr;
	set_total();
}

Stock :: ~Stock()
{
	cout << "회사명 : " << name << " 소멸" << endl;
	cout << "------------------------" << endl;

}

void Stock::acquire(const string& co, int n, float pr)
{
	name = co;
	shares = n;
	share_price = pr;
	set_total();
}

void Stock::buy(int n, float pr)
{
	shares += n;
	share_price = pr;
	set_total();

}
void Stock::sell(int n, float pr)
{
	shares -= n;
	share_price = pr;
	set_total();
}
void Stock::updata(float pr)
{
	share_price = pr;
	set_total();
}

void Stock::show()
{
	cout << "회사명 : " << name << endl;
	cout << "주식수 : " << shares << endl;
	cout << "주식가격 : " << share_price << endl;
	cout << "총 가치 : " << total_value << endl;


}
Stock Stock::topval(Stock& s)
{
	if (s.share_price > this->share_price)
		return s;
	else
		return *this;
}