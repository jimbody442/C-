#include <iostream>
using namespace std;

class Animal {
public:
	virtual void makeSound(){  //�����Լ�
		cout << "������ �Ҹ�����." << endl;
	}
};

class Dog :public Animal {
public:
	void makeSound() override {	//�������̵�
		cout << "�۸�!" << endl;
	}
};

class Cat :public Animal {
public:
	void makeSound() override {
		cout << "�߿�!" << endl;
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