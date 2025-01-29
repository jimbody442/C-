#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a;
	cin >> b;

	cout.precision(6);
	//cout << fixed;

	cout << a / b << endl;;
	cout.unsetf(ios::fixed);
	cout << a / b;
	return 0;
}