//new�� delete������.
//�����Ҵ�,���� ������.
// new�����ڸ� malloc()�Լ��� ������ �� ������� Ư¡ �� �ϳ��� "�޸� ũ�⸦ �������� �ʴ´�"
#include <iostream>

int main()
{
	//�ν��Ͻ��� �������� �����ϴ� ���
	int* pdata = new int;

	// �ʱⰪ�� ����ϴ� ���
	int* pNewdata = new int(10);

	*pdata = 5;
	std::cout << *pdata << std::endl;
	std::cout << *pNewdata << std::endl;

	delete pdata;
	delete pNewdata;
	
	return 0;

}