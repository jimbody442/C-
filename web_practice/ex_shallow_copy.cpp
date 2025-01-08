//���� ����� ���� ����.

//���Ӱ� �����ϴ� ������ �ٸ� ���� ���� �����ϱ� ���ؼ��� ���� �����ڸ� ���.
// int  x =10;
// int  y = x;

//���������� ���Ӱ� �����ϴ� ��ü�� �� �ٸ� ��ü�� ���� �����ϱ� ���ؼ��� ���� ������
//(=)�� ���.

//Book web_book("HTML",350);
//Book html_book = web_book;
//������ ���� ���� ����� ���� ����� ����.

//-----���� ����-------
// ���� �����ϴ� ���� �ƴ�, ���� ����Ű�� �����͸� ����.
// ���� ������ �������� ���Կ����ڸ� �̿��� ���� ����� ������ ���� ������
// ��ü������ ���� �߻�.
// ��ü�� ����� �޸� ������ �� ������ ������ ��쿡�� ������ �߻�.


//------���� ������--------(copy constructor)
// ���� �����ڶ� �ڽŰ� ���� Ŭ������ Ÿ���� �ٸ� ��ü�� ���� ������ �μ��� ���޹޾�
// ������ ������ �ڽ��� �ʱ�ȭ.
// ���� �����ڴ� ���Ӱ� �����Ǵ� ��ü�� ���� ��ü�� �����鼭��, �������� ������ ��.
// ���� �����ڸ� �̿��� ������ ���� ���縦 ���� ���� ����.

//���� �������� ����
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
	Book web_book = Book("HTML�� CSS", 350);
	//Book web_book("HTML�� CSS", 350);
	Book html_book = Book(web_book);
	//Book html_book(web_book);
}

Book::Book(const Book& origin) //������ ���� ����.
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