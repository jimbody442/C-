// 클래스 접근 제어 지시자  
#include <cstdio>  
#include <stdio.h>  


// C++에서는 class 키워드를 사용할 수 있지만, C에서는 struct를 사용해야 합니다.  
class USERDATA  
{  
public:  
   int nAge;  
   char szName[20];  

   // 멤버 함수 선언 및 선언  
   void print(void)  
   {  
       // nAge 와 szName은 print() 함수의 지역 변수가 아니다.  
       printf("%d, %s\n", nAge, szName);  
   }  
};  

int main()  
{  
   USERDATA user = { 20, "홍길도" };  
   user.print(); // 멤버 함수 호출  
}