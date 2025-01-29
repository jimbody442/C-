# include <iostream>
using namespace std;

class Animal {
public:
	string name;

	void eat() {
		cout << name << "°¡ ¸Ô½À´Ï´Ù." << endl;
	}
};

class Dog : public Animal {
public:
	void bark() {
		cout << name << "°¡ Â¢½À´Ï´Ù." << endl;
	}
};

int main() {
	Dog myDog;
	myDog.name = "¹ÙµÏÀÌ";
	myDog.eat();
	myDog.bark();

	return 0;

}