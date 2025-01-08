//�Ҹ��� (destructor)

//��ü ��� �ʱ�ȭ�Ӹ� �ƴ϶�, ��ü�� ����ϱ� ���� �ܺ� ȯ����� �ʱ�ȭ
//��ü�� ������ ������ �����Ϸ��� ���� �ڵ����� ȣ��Ǹ�, ����� ���� ��ü ����.

//�Ҹ��� ����
//~Book();

//��ȯ���� ����.
// ex �����ڿ��� new Ű���带 �̿��� ���� �޸� �Ҵ��� �ߴ�.
// �Ҹ��ڿ����� delete Ű���带 �̿��� �������� �Ҵ� ���� �޸𸮸� ��ȯ �ؾ���.
// �׷��� ������ �ش� ���α׷��� �޸� ������ �߻�.

//Ŭ���� �Ҹ����� ������ Ŭ���� ������ public ������ ����.

#include <iostream>	

using namespace std;

class Book
{
	int currnet_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	Book(const Book&);
	~Book(); //�Ҹ��� ���� ����
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

Book::~Book()
{
	//���α׷��� ����ɶ� �����Ϸ��� ���� �ڵ� ȣ��
	cout << "Book ��ü�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
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