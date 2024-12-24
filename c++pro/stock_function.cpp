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
	cout << "ȸ��� :" << name << endl;
	cout << "�ֽļ� :" << shares << endl;
	cout << "�ְ� :" << share_val << endl;
	cout << "�ֽ� �� ��ġ :" << total_val << endl;
}