#include <iostream>
using namespace std;

class Rect
{
	double height_;
	double width_;
public:
	Rect(double height, double width); //������.
	void DisplaySize();
	Rect operator*(double mul)const;
	friend Rect operator*(double mul, const Rect& origin);
};

int main(void)
{
	Rect origin_rect(10, 20);
	Rect rec01 = origin_rect * 2;
	Rect rec02 = 2 * origin_rect;
}

void Rect::DisplaySize()
{
	cout << "�� �簢���� ���̴�" << this->height_ << "�̰�, �ʺ��" << this->width_ << "�Դϴ�" << endl;


}

Rect Rect::operator*(double mul)const
{
	return Rect(height_ * mul, width_ * mul);
}

 Rect operator*(double mul, const Rect& origin)
{
	 return origin * mul;
}