//디폴트 생성자는 객체가 생성될 떄 사용자가 초깃값을 명시하지 않으면 컴파일러가 자동
//으로 제공하는 생성자.
//디폴트 생성자는 사용자로부터 인수를 전달받지 않으므로 ,매개변수를 가지지 않음.
// 매개변수를 가지지 않으므로 대부분의 디폴트 생성자가 0 이나 NULL, 빈문자열 등으로 초기화 진행.

//디폴트 생성자의 원형
// Book::Book() {}

//디폴트 생성자의 정의.
//1.함수 오버로딩을 이용한 방법
//2.디폴트 인수를 이용한 방법

// -디폴트 인수 이용하여 디폴트 생성자 정의.
//Book::Book(const string& title ="웹 프로그래밍",int total_page = 100);

//-함수 오버로딩을 이용한 디폴트 생성자의 정의
//c++에서는 함수 오버로딩을 이용하여 매개변수를 가지지 않는 또 하나의 생성자를 정의 가능
// ******클래스는 단 하나의 디폴트 생성자만 가질 수 있음*******

//Book web_book; //디폴트 생성자의 암시적 호출
//Book web_book = Book(); //디폴트 생성자의 명시적 호출
//Book *ptr_book = new Book; //디폴트 생성자 암시적 호출

//생성자(constructor)
// c++은 객체의 생성과 동시에 멤버 변수 초기화해주는 멤버함수를 제공.

//특징
//1. 생성자는 초기화를 위한 데이터를 인수로 전달받을 수 있다.
//2. 생성자는 반환값이 없지만 void 선언 x
//3. 객체를 초기화하는 방법잉 여러 개 존재할 경우에는 오버로딩 규칙에 따라 여러 개의 생성자
//를 가질 수 있다.

#include <iostream>

using namespace std;


class Book
{
private:
	int current_page;
	void set_percent();

public:
	Book(const string& title = "웹 프로그래밍", int total_page = 100); //클래스 외부에서 정의.
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main()
{
	Book web_book = Book(); //생성자의 명시적 호출
	//Book web_book; 암시적 생성자.
	// 디폴트 생성자를 암시적으로 호출하고 싶을 때는 ()를 사용 x
	 //생성자가 호출되어 멤버 변수인 percent_가 초기화 되었는지 확인.
	cout << web_book.percent_ << endl;

	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page = 0;
	set_percent();
}

void Book::set_percent()
{
	percent_ = (double)current_page / total_page_ * 100;
}