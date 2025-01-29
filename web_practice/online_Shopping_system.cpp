#include <iostream>
#include <vector>
#include <string>
#include <iomanip> //소수점 자리 맞추기 위해 사용
using namespace std;


//상품 클래스
class Product {
private:
	string name;
	double price;
	int stock;

public:
	//생성자
	Product(string n, double p, int s) : name(n), price(p), stock(s) {}

	//상품 정보 출력
	void Info() const {
		cout << "상품명:" << name << ", 가격 :$" << fixed << setprecision(2) << price << ", 재고:" << stock << "개" << endl;
	}

	//상품 가격
	double getPrice() const {
		return price;
	}

	//상품 이름
	string getName() const {
		return name;
	}

	//재고 확인
	int getStock() const {
		return stock;
	}

	//재고 차감.
	void reduceStock(int quantity) {
		if (quantity <= stock) {
			stock -= quantity;
		}
		else
			cout << "재고 부족" << endl;
	}
	
	//재고 수정 
	void updateStock(int quantity) {
		stock = quantity;
	}
};

class ShoppingCart {
private:
	vector<pair<Product, int>> cartItems;

public:
	//장바구니에 상품 추가
	void addTocart(Product& product, int quantity) {
		if (quantity <= product.getStock()) {
			cartItems.push_back(make_pair(product, quantity));
			product.reduceStock(quantity);
			cout << quantity << "개의" << product.getName() << "가 장바구니에 추가되었습니다." << endl;
		}
		else {
			cout << "장바구니에 추가할 수 있는 수량이 부족합니다." << endl;
			cout << "최대 수량 :" << product.getStock() << "입니다." << endl;

		}
	}
	void displayCart() const {
		if (cartItems.empty()) {
			cout << "장바구니가 비어있습니다." << endl;
			return;
		}

		double total = 0;
		cout << "\n 장바구니 상품 목록:" << endl;
		for (const auto& item : cartItems) {
			cout << "상품명:" << item.first.getName() << ", 가격:$" << item.first.getPrice()
				<< ", 수량:" << item.second << ", 합계:$" << fixed << setprecision(2) << item.first.getPrice() * item.second << endl;
			total += item.first.getPrice() * item.second;
		}
		cout << "총 합계 :$" << fixed << setprecision(2) << total << endl;
	}
	//장바구니에서 상품 삭제.
	void removeFormCart(const string& productName) {
		for (auto it = cartItems.begin(); it != cartItems.end(); it++) {
			if (it->first.getName() == productName) {
				it->first.updateStock(it->first.getStock() + it->second); //상품 재고 복구
				cartItems.erase(it);
				cout << productName << "이(가) 장바구니에서 삭제되었습니다" << endl;
				return;
			}
		}
	}
	//결제 처리
	void checkout()const {
		if (cartItems.empty()) {
			cout << "장바구니가 비어 있습니다, 상품을 추가해 주세요." << endl;
			return;
		}
		double total = 0;
		cout << "\n 결제 정보:" << endl;
		for (const auto& item : cartItems) {
			total += item.first.getPrice()* item.second;
		}
		cout << "총 결제 금액 :$" << fixed << setprecision(2) << total << endl;
		cout << "감사합니다! 결제가 완료되었습니다." << endl;
	}
	
};

class Store {
private:
	vector<Product> products; //상품 목록을 저장하는 벡터

public:
	void addProduct(string name, double price, int stock) {
		Product newProduct(name, price, stock);
		products.push_back(newProduct);
	}

	//상품 목록 출력
	void displayProducts() const {
		if (products.empty()) {
			cout << "상품이 없습니다" << endl;
			return;
		}
		cout << "\n 상점 상품 목록" << endl;
		for (const auto& product : products) {
			product.Info();
		}
	}

	//특정 상품 검색
	Product* searchProduct(const string& productName) {
		for (auto& product : products) {
			if (product.getName() == productName) {
				return&product;
			}
		}
		cout << "상품을 찾을 수 없습니다." << endl;
		return nullptr;
	}
};

int main() {
	Store store; //쇼핑몰 관리 시스템 객체 생성
	ShoppingCart cart; //장바구니 객체 생성

	//상품 추가.
	store.addProduct("노트북", 999.99, 10);
	store.addProduct("스마트폰", 699.99, 20);
	store.addProduct("헤드폰", 199.99, 15);

	//상품 목록 출력
	store.displayProducts();

	//상품 검색 및 장바구니에 추가
	Product* laptop = store.searchProduct("노트북");
	if (laptop != nullptr) {
		cart.addTocart(*laptop, 2);
	}
	
	//장바구니 출력
	cart.displayCart();

	//상품 삭제(장바구니)
	cart.removeFormCart("노트북");

	//장바구니 출력
	cart.displayCart();

	//결제
	cart.checkout();
}