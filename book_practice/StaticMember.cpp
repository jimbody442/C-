//���� ������ ��ü���� ���α׷��ֿ��� �Ҽ� ��ü�� ���� ������ �����ϴ� ���� �Լ����� ���� ���踦 �����ϰų�
//���ʿ��� ���� ���踦 ����� ������ �� �� �ִ�.

//�׷��� ���� ����� �ٷ� �������.
//���� ����� ��ǻ� ���������� �Լ��� ������ ���� Ŭ���� ����� ���� ���� ���̴�.

//������ ���� �տ� static���� �ۼ�.
// ���� ����Լ��� �ν��Ͻ��� �������� �ʰ� ���� ȣ�� ����, �׷��� this�����͸� ����� �� ������ ���� ������ �ݵ�� ����� ���Ǹ� �и�.

#include <iostream>

using namespace std;

class C
{
public:
	C(int nParam) : nData(nParam) {
		nCount++;
	}
	int Getdata() {
		return nData;
	}
	void ResetCount() {
		nCount = 0;
	}

	static int GetCount()
	{
		return nCount;
	}

private:
	int nData;
	static int nCount;
};

int C::nCount = 0;

int main()
{
	C a(5), b(10);

	//���� ����� ����
	cout << a.GetCount() << endl;

	b.GetCount();
	cout << b.GetCount() << endl;

	cout << C::GetCount() << endl;
}