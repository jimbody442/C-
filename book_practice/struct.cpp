#include <iostream>

//������ �ڵ�
typedef struct USERDATA
{
	int Age;
	char Name[32];
	void(*Print)(struct USERDATA*);
} USERDATA;

void PrintData(USERDATA* User)
{
	printf("%d, %s\n", User->Age, User->Name);
}

//����� �ڵ�
int main(void)
{
	USERDATA user = { 20, "ö��",PrintData };
	//printf("%d, %s\n", user.Age, user.Name);
	//PrintData(&user);
	//user.Print(&user);
	user.Print(); //�Ű������� ���⿡�� ��������� &user �Ű������� ����! >>this�����͸� �����ϴµ� ū ����<<<
}