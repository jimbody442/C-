#include <iostream>
#include "Stock.h"
using namespace std;
Stock::Stock()
{

}
Stock::~Stock()
{

}
void Stock::acquire(string co, int a, float b)
{
	name = co;
	shares = a;
	share_val = b;
	set_total();

}
void Stock::buy(int n, float pr)
{
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr)
{
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr)
{
	share_val = pr;
	set_total();
}
void Stock::show()
{
	cout << "회사명 :" << name << endl;
	cout << "주식수 :" << shares << endl;
	cout << "주가 :" << share_val << endl;
	cout << "주식 총 가치 :" << total_val << endl;
}