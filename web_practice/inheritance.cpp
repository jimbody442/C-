# include <iostream>
using namespace std;

class Animal {
public:
	string name;

	void eat() {
		cout << name << "�� �Խ��ϴ�." << endl;
	}
};

class Dog : public Animal {
public:
	void bark() {
		cout << name << "�� ¢���ϴ�." << endl;
	}
};

int main() {
	Dog myDog;
	myDog.name = "�ٵ���";
	myDog.eat();
	myDog.bark();

	return 0;

}