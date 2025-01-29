#include <iostream>
using namespace std;

class Animal {
public:
	virtual void makeSound(){  //가상함수
		cout << "동물이 소리낸다." << endl;
	}
};

class Dog :public Animal {
public:
	void makeSound() override {	//오버라이딩
		cout << "멍멍!" << endl;
	}
};

class Cat :public Animal {
public:
	void makeSound() override {
		cout << "야옹!" << endl;
	}
};

int main() {
	Animal* a1 = new Dog();
	Animal* a2 = new Cat();

	a1->makeSound();
	a2->makeSound();

	delete a1;
	delete a2;

	return 0;
}