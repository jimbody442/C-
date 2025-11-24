#include <iostream>
using namespace std;

class CMdata
{
private:
	int data;
public:
	CMdata(int nParam) : data(nParam) {};

	void printData() const
	{

		cout << "data: " << data << endl;

		cout << CMdata::data << endl; // 클래스 이름을 사용한 접근
		
		cout << this->data << endl; // this 포인터를 사용한 접근

		cout << this->CMdata::data << endl; // this 포인터와 클래스 이름을 사용한 접근
	}
	void printDataref(CMdata* ref) const
	{
		CMdata* pthis = ref;

		//전달받은 주소의 data를 출력
		cout << data << endl;

		//CMdata 클래스의 멤버인 data를 출력
		cout << CMdata::data << endl;

		//새로 생성한 클래스 포인터 객체에 접근하여 data출력, 포인터는 ->접근자로 접근
		cout << pthis->CMdata::data << endl;
	}
};

int main()
{
	CMdata obj(100);
	obj.printData();
	obj.printDataref(&obj); //포인터에 주소전달

}