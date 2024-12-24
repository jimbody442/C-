#include <iostream>

using namespace std;

template <class Any>
Any sum(Any, Any);

int main()
{
	int z = 5, k = 3;
	cout << sum(z, k) << endl;

	double c = 3.14;
	double d = 1.534;
	cout << sum(c, d) << endl;
	
	return 0;
}

template <class Any>
Any sum(Any a, Any b) {
	return a + b;
}