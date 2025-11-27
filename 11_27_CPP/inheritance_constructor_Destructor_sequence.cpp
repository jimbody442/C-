#include <iostream>
using namespace std;

class CA
{
public:
	CA()
	{
		cout << "CA생성자 호출" << endl;
	}
	~CA()
	{
		cout << "CA소멸자 호출" << endl;
	}
};

class CB : public CA 
{  
public:
	CB()
	{
		cout << "CB생성자 호출" << endl;
	}
	~CB()
	{
		cout << "CB소멸자 호출" << endl;
	}
};

class CC : public CB
{
public:
	CC()
	{
		cout << "CC생성자 호출" << endl;
	}
	~CC()
	{
		cout << "CC소멸자 호출" << endl;
	}
};

int main()
{
	cout << "*****Before*****" << endl;
	CC data;
	cout << "*****End*****" << endl;
}