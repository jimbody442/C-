//DisplayŬ������ ShowDiagonal() �Լ����� Rect Ŭ������ ��� ����Լ��� ������ �� �ֵ��� ����
#include <iostream>
#include <cmath>

using namespace std;

class Rect;

class Display
{
public:
	void ShowSize(const Rect& target);
	void ShowDiagoanl(const Rect& target);
};

// RectŬ���� ������ ShowDiagonal()�Լ��� ������� ����� ���� ó���ϱ� ����
// �����Ϸ��� �̹� ShowDiagonal()�Լ��� ������ �˰� �־����.!!!!
//���� ������ �ٲٰ� �Ǹ� �����Ϸ��� ������� ����� ShowDiagonal()�Լ��� �������ϹǷ�.

//���� �߻�!!!!!

class Rect
{
private:
	double height_;
	double width_;

public:
	Rect(double height, double width);
	void height() const;
	void width() const;
	friend void Display::ShowDiagoanl(const Rect& target); //������ ����Լ� ����
};


int main()
{
	Rect rec01(10, 20);
	Display rect_display;
	rect_display.ShowSize(rec01);
	rect_display.ShowDiagoanl(rec01);

	return 0;

}

Rect::Rect(double height, double width)
{
	height_ = height;
	width_ = width;
}

void Rect::height()const
{
	cout << "�� ������� ���̴�" << this->height_ << "�Դϴ�" << endl;
}
void Rect::width() const
{
	cout << "�� �簢���� �ʺ��" << this->width_ << "�Դϴ�" << endl;
}

void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}

void Display::ShowDiagoanl(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));

	cout << "�� �簢���� �밢���� ���̴�" << diagonal << "�Դϴ�" << endl;
}






//**�̹������� ���� �� �� �ִ� ��
// Rect Ŭ������ ���� ���� �� ��
// Display Ŭ�������� ��� �Լ��� �����Ͽ� �����Ϸ��� showDiagonal()�Լ� ������ �˰� �ְ�
//�� �� Rect Ŭ������ ����Լ����� ������ �Լ��� �����Ͽ� �����Ϸ��� �̸� �˰� �ְ� �ؾ��Ѵ�.