#include <iostream>

using namespace std;

class Book
{
private:
	int current_page;
	void set_persent();
public:
	Book(const string& title, int total_page);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
	const Book& ThickerBook(const Book&);	//ThickerBook() 함수원형
};

int main(void)
{
	Book web_book("HTML과 CSS", 350);
	Book html_book("HTML 래퍼런스", 200);

	cout << web_book.ThickerBook(html_book).title_;
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page = 0;
	set_persent();
}

void Book::set_persent()
{
	percent_ = (double)current_page / total_page_ * 100;
}

const Book& Book::ThickerBook(const Book& comp_book)
{
	if (comp_book.total_page_ > this->total_page_)
	{
		return comp_book;
	}
	else
		return *this;
}

//book&을 통해서 webbook을 참조하고 this가 호출한 객체.

// this는 포인터이므로, 반환할 때에는 참조 연산자(*)를 사용하여 호출한 객체 그 자체를 반환
// this 포인터는 암시적으로 사용 가능하지만, 가급적 화살표 (->)연산자를 통해 명시적으로 사용.

//this 포인터 특징
//1. this포인터는 클래스, 구조체 또는 열거체 탕비의 비정적 멤버 함수에서만 사용
//2. 정적(static)멤버 함수는 this 포인터를 가지지 않는다.
//3. this포인터는 언제나 포인터 상수, 값을 재할당할 수 없다.