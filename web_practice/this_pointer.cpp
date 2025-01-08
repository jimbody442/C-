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
	const Book& ThickerBook(const Book&);	//ThickerBook() �Լ�����
};

int main(void)
{
	Book web_book("HTML�� CSS", 350);
	Book html_book("HTML ���۷���", 200);

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

//book&�� ���ؼ� webbook�� �����ϰ� this�� ȣ���� ��ü.

// this�� �������̹Ƿ�, ��ȯ�� ������ ���� ������(*)�� ����Ͽ� ȣ���� ��ü �� ��ü�� ��ȯ
// this �����ʹ� �Ͻ������� ��� ����������, ������ ȭ��ǥ (->)�����ڸ� ���� ��������� ���.

//this ������ Ư¡
//1. this�����ʹ� Ŭ����, ����ü �Ǵ� ����ü ������ ������ ��� �Լ������� ���
//2. ����(static)��� �Լ��� this �����͸� ������ �ʴ´�.
//3. this�����ʹ� ������ ������ ���, ���� ���Ҵ��� �� ����.