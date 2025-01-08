//��ü�� private ������� �ش� ��ü�� public��� �Լ��� ���� ����.
//������ ��쿡 ���� �ش� ��ü�� ����Լ��� �ƴ� �Լ��� private����� ���� �ؾ� �� ��� �߻�

//priavte����� �����ϱ� ���� ���ο� public��� �Լ��� �ۼ��ϴ� ���� ��ȿ����.
//����!!! �̷��� ��츦 ���� friend��� �������� Ű���� ����

//������� ������ ��� ���� �ش� ��ü�� ��� ����� ������ �� �ִ� ���� �ο�.
//�̷��� friend�� ���� �Լ�, Ŭ����, ����Լ��� ������ ���·� ��밡��.

//�Լ� ���� 
//friend Ŭ�����̸� �Լ��̸�(�Ű��������);
// ------����� ����Ʈ �Լ��� Ŭ���� ����ο� �� ������ ���Ե����� Ŭ������ ����Լ� x
// Ŭ������ ����Լ��� �ƴ����� ,����Լ��� ���� ������ ����.
//************public,privae,proteted���� ���� ��ġ�� �� ������, ��ġ�� ���� ���� x


#include <iostream>
using namespace std;

class Rect
{
	double height_;
	double width_;
public:
	Rect(double height, double width); //������.
	void DisplaySize();
	Rect operator*(double mul) const;
};

int main(void)
{
	Rect origin_rect(10, 20);
	Rect changed_rect = origin_rect * 2;
	//Rect changed_rect 2 * origin_rect;
}

void Rect::DisplaySize()
{
	cout << "�� �簢���� ���̴�" << this->height_ << "�̰�, �ʺ��" << this->width_ << "�Դϴ�" << endl;


}

Rect Rect::operator*(double mul)const
{
	return Rect(height_ * mul, width_ * mul);
}

//���� operator*()�Լ����� �ּ� ó���� ����ó�� �ǿ������� ������ �ٲپ� ������ ������ �߻�

//������ ��� �Լ��� ���� �ǿ������� ��ü�� ȣ���ϴ� ���°� �Ǿ�� �ϱ� ����.