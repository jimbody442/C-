// Ŭ���� ���� ���� ������  
#include <cstdio>  
#include <stdio.h>  


// C++������ class Ű���带 ����� �� ������, C������ struct�� ����ؾ� �մϴ�.  
class USERDATA  
{  
public:  
   int nAge;  
   char szName[20];  

   // ��� �Լ� ���� �� ����  
   void print(void)  
   {  
       // nAge �� szName�� print() �Լ��� ���� ������ �ƴϴ�.  
       printf("%d, %s\n", nAge, szName);  
   }  
};  

int main()  
{  
   USERDATA user = { 20, "ȫ�浵" };  
   user.print(); // ��� �Լ� ȣ��  
}