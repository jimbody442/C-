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
	Book(const string& title, int total_page); //클래스 외부에서 정의.
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main()
{
	Book web_book = Book("HTML과 CSS", 350); //생성자의 명시적 호출
   //Book web_book("HTML 과 css", 350); 암묵적 생성자.
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

void Book:: set_percent()
{
	percent_ = (double)current_page / total_page_ * 100;
}