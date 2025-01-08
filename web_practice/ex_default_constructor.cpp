//����Ʈ �����ڴ� ��ü�� ������ �� ����ڰ� �ʱ갪�� ������� ������ �����Ϸ��� �ڵ�
//���� �����ϴ� ������.
//����Ʈ �����ڴ� ����ڷκ��� �μ��� ���޹��� �����Ƿ� ,�Ű������� ������ ����.
// �Ű������� ������ �����Ƿ� ��κ��� ����Ʈ �����ڰ� 0 �̳� NULL, ���ڿ� ������ �ʱ�ȭ ����.

//����Ʈ �������� ����
// Book::Book() {}

//����Ʈ �������� ����.
//1.�Լ� �����ε��� �̿��� ���
//2.����Ʈ �μ��� �̿��� ���

// -����Ʈ �μ� �̿��Ͽ� ����Ʈ ������ ����.
//Book::Book(const string& title ="�� ���α׷���",int total_page = 100);

//-�Լ� �����ε��� �̿��� ����Ʈ �������� ����
//c++������ �Լ� �����ε��� �̿��Ͽ� �Ű������� ������ �ʴ� �� �ϳ��� �����ڸ� ���� ����
// ******Ŭ������ �� �ϳ��� ����Ʈ �����ڸ� ���� �� ����*******

//Book web_book; //����Ʈ �������� �Ͻ��� ȣ��
//Book web_book = Book(); //����Ʈ �������� ����� ȣ��
//Book *ptr_book = new Book; //����Ʈ ������ �Ͻ��� ȣ��

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
	Book(const string& title = "�� ���α׷���", int total_page = 100); //Ŭ���� �ܺο��� ����.
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main()
{
	Book web_book = Book(); //�������� ����� ȣ��
	//Book web_book; �Ͻ��� ������.
	// ����Ʈ �����ڸ� �Ͻ������� ȣ���ϰ� ���� ���� ()�� ��� x
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

void Book::set_percent()
{
	percent_ = (double)current_page / total_page_ * 100;
}