//������(constructor)
// c++�� ��ü�� ������ ���ÿ� ��� ���� �ʱ�ȭ���ִ� ����Լ��� ����.

//Ư¡
//1. �����ڴ� �ʱ�ȭ�� ���� �����͸� �μ��� ���޹��� �� �ִ�.
//2. �����ڴ� ��ȯ���� ������ void ���� x
//3. ��ü�� �ʱ�ȭ�ϴ� ����� ���� �� ������ ��쿡�� �����ε� ��Ģ�� ���� ���� ���� ������
//�� ���� �� �ִ�.

#include <iostream>

using namespace std;

class Book
{
private:
	int current_page;
	void set_percent();

public:
	Book(const string& title, int total_page); //Ŭ���� �ܺο��� ����.
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main()
{
	Book web_book = Book("HTML�� CSS", 350); //�������� ����� ȣ��
   //Book web_book("HTML �� css", 350); �Ϲ��� ������.
	//�����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ �Ǿ����� Ȯ��.
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