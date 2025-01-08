#include <iostream>

//제작자 코드
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

//사용자 코드
int main(void)
{
	USERDATA user = { 20, "철수",PrintData };
	//printf("%d, %s\n", user.Age, user.Name);
	//PrintData(&user);
	//user.Print(&user);
	user.Print(); //매개변수는 보기에는 비어있지만 &user 매개변수가 존재! >>this포인터를 이해하는데 큰 도움<<<
}