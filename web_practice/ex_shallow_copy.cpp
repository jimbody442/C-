//얕은 복사와 깊은 복사.

//새롭게 생성하는 변수에 다른 변수 값을 대입하기 위해서는 대입 연산자를 사용.
// int  x =10;
// int  y = x;

//마찬가지로 새롭게 생성하는 객체에 또 다른 객체의 값을 대입하기 위해서도 대입 연산자
//(=)를 사용.

//Book web_book("HTML",350);
//Book html_book = web_book;
//하지만 위와 같은 방법은 얕은 복사로 수행.

//-----얕은 복사-------
// 값을 복사하는 것이 아닌, 값을 가리키는 포인터를 복사.
// 따라서 변수의 생성에서 대입연산자를 이용한 값의 복사는 문제가 되지 않지만
// 객체에서는 문제 발생.
// 객체의 멤버가 메모리 공간의 힙 영역을 참조할 경우에는 문제가 발생.


//------복사 생성자--------(copy constructor)
// 복사 생성자란 자신과 같은 클래스의 타입의 다른 객체에 대한 참조를 인수로 전달받아
// 참조를 가지고 자신을 초기화.
// 복사 생성자는 새롭게 생성되는 객체가 원본 객체와 같으면서도, 독립성을 가지게 함.
// 복사 생성자를 이용한 대입은 깊은 복사를 통한 값의 복사.

//복사 생성자의 원형
//Book(const Book&);

#include <iostream>	

using namespace std;

class Book
{
	int currnet_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	Book(const Book&);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main()
{
	Book web_book = Book("HTML과 CSS", 350);
	//Book web_book("HTML과 CSS", 350);
	Book html_book = Book(web_book);
	//Book html_book(web_book);
}

Book::Book(const Book& origin) //참조를 통한 복사.
{
	title_ = origin.title_;
	total_page_ = origin.total_page_;
	currnet_page_ = origin.currnet_page_;
	percent_ = origin.percent_;
}

void Book::set_percent()
{
	percent_ = (double)currnet_page_ / total_page_ * 100;
}