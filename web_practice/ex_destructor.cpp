//소멸자 (destructor)

//객체 멤버 초기화뿐만 아니라, 객체를 사용하기 위한 외부 환경까지 초기화
//객체의 수명이 끝나면 컴파일러에 의해 자동으로 호출되며, 사용이 끝난 객체 정리.

//소멸자 원형
//~Book();

//반환값이 없음.
// ex 생성자에서 new 키워드를 이용해 동적 메모리 할당을 했다.
// 소멸자에서는 delete 키워드를 이용해 동적으로 할당 받은 메모리를 반환 해야함.
// 그렇지 않으면 해당 프로그램에 메모리 누수가 발생.

//클래스 소멸자의 원형은 클래스 선언의 public 영역에 포함.

#include <iostream>	

using namespace std;

class Book
{
	int currnet_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	Book(const Book&);
	~Book(); //소멸자 원형 정의
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

Book::~Book()
{
	//프로그램이 종료될때 컴파일러에 의해 자동 호출
	cout << "Book 객체의 소멸자가 호출되었습니다." << endl;
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