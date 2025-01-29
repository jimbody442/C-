#include <iostream>
#include <vector>
#include <string>
#include <iomanip> //�Ҽ��� �ڸ� ���߱� ���� ���
using namespace std;


//��ǰ Ŭ����
class Product {
private:
	string name;
	double price;
	int stock;

public:
	//������
	Product(string n, double p, int s) : name(n), price(p), stock(s) {}

	//��ǰ ���� ���
	void Info() const {
		cout << "��ǰ��:" << name << ", ���� :$" << fixed << setprecision(2) << price << ", ���:" << stock << "��" << endl;
	}

	//��ǰ ����
	double getPrice() const {
		return price;
	}

	//��ǰ �̸�
	string getName() const {
		return name;
	}

	//��� Ȯ��
	int getStock() const {
		return stock;
	}

	//��� ����.
	void reduceStock(int quantity) {
		if (quantity <= stock) {
			stock -= quantity;
		}
		else
			cout << "��� ����" << endl;
	}
	
	//��� ���� 
	void updateStock(int quantity) {
		stock = quantity;
	}
};

class ShoppingCart {
private:
	vector<pair<Product, int>> cartItems;

public:
	//��ٱ��Ͽ� ��ǰ �߰�
	void addTocart(Product& product, int quantity) {
		if (quantity <= product.getStock()) {
			cartItems.push_back(make_pair(product, quantity));
			product.reduceStock(quantity);
			cout << quantity << "����" << product.getName() << "�� ��ٱ��Ͽ� �߰��Ǿ����ϴ�." << endl;
		}
		else {
			cout << "��ٱ��Ͽ� �߰��� �� �ִ� ������ �����մϴ�." << endl;
			cout << "�ִ� ���� :" << product.getStock() << "�Դϴ�." << endl;

		}
	}
	void displayCart() const {
		if (cartItems.empty()) {
			cout << "��ٱ��ϰ� ����ֽ��ϴ�." << endl;
			return;
		}

		double total = 0;
		cout << "\n ��ٱ��� ��ǰ ���:" << endl;
		for (const auto& item : cartItems) {
			cout << "��ǰ��:" << item.first.getName() << ", ����:$" << item.first.getPrice()
				<< ", ����:" << item.second << ", �հ�:$" << fixed << setprecision(2) << item.first.getPrice() * item.second << endl;
			total += item.first.getPrice() * item.second;
		}
		cout << "�� �հ� :$" << fixed << setprecision(2) << total << endl;
	}
	//��ٱ��Ͽ��� ��ǰ ����.
	void removeFormCart(const string& productName) {
		for (auto it = cartItems.begin(); it != cartItems.end(); it++) {
			if (it->first.getName() == productName) {
				it->first.updateStock(it->first.getStock() + it->second); //��ǰ ��� ����
				cartItems.erase(it);
				cout << productName << "��(��) ��ٱ��Ͽ��� �����Ǿ����ϴ�" << endl;
				return;
			}
		}
	}
	//���� ó��
	void checkout()const {
		if (cartItems.empty()) {
			cout << "��ٱ��ϰ� ��� �ֽ��ϴ�, ��ǰ�� �߰��� �ּ���." << endl;
			return;
		}
		double total = 0;
		cout << "\n ���� ����:" << endl;
		for (const auto& item : cartItems) {
			total += item.first.getPrice()* item.second;
		}
		cout << "�� ���� �ݾ� :$" << fixed << setprecision(2) << total << endl;
		cout << "�����մϴ�! ������ �Ϸ�Ǿ����ϴ�." << endl;
	}
	
};

class Store {
private:
	vector<Product> products; //��ǰ ����� �����ϴ� ����

public:
	void addProduct(string name, double price, int stock) {
		Product newProduct(name, price, stock);
		products.push_back(newProduct);
	}

	//��ǰ ��� ���
	void displayProducts() const {
		if (products.empty()) {
			cout << "��ǰ�� �����ϴ�" << endl;
			return;
		}
		cout << "\n ���� ��ǰ ���" << endl;
		for (const auto& product : products) {
			product.Info();
		}
	}

	//Ư�� ��ǰ �˻�
	Product* searchProduct(const string& productName) {
		for (auto& product : products) {
			if (product.getName() == productName) {
				return&product;
			}
		}
		cout << "��ǰ�� ã�� �� �����ϴ�." << endl;
		return nullptr;
	}
};

int main() {
	Store store; //���θ� ���� �ý��� ��ü ����
	ShoppingCart cart; //��ٱ��� ��ü ����

	//��ǰ �߰�.
	store.addProduct("��Ʈ��", 999.99, 10);
	store.addProduct("����Ʈ��", 699.99, 20);
	store.addProduct("�����", 199.99, 15);

	//��ǰ ��� ���
	store.displayProducts();

	//��ǰ �˻� �� ��ٱ��Ͽ� �߰�
	Product* laptop = store.searchProduct("��Ʈ��");
	if (laptop != nullptr) {
		cart.addTocart(*laptop, 2);
	}
	
	//��ٱ��� ���
	cart.displayCart();

	//��ǰ ����(��ٱ���)
	cart.removeFormCart("��Ʈ��");

	//��ٱ��� ���
	cart.displayCart();

	//����
	cart.checkout();
}