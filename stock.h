#include <iostream>
#include <string>
#ifndef STOCK_H
using namespace std;
class Stock
{
private:
	string name;
	int shares;
	float share_price;
	float total_value;
	void set_total() { total_value = shares * share_price; };

public:
	void acquire(const string&, int, float);
	void buy(int, float);
	void sell(int, float);
	void updata(float);
	void show();
	Stock topval(Stock&);
	Stock(const string , int , float );
	~Stock();

};

#endif