//�迭 ����
#include <iostream>
using namespace std;

class CTest
{
	int m_nData; // ��� ������

public:
	CTest()
	{
		cout << "CTest ������ ȣ��" << endl;

	}
	~CTest()
	{
		cout << "CTest �Ҹ��� ȣ��" << endl;
	}
};


int main()
{
	cout << "Begin main" << endl;
	CTest* pData = new CTest[3];

	delete[] pData; 
	cout << "End" << endl;

	return 0;
}