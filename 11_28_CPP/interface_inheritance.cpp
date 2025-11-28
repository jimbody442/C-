#include <iostream>

using namespace std;

//초기 제작자
class CMyobj
{
public:
	CMyobj() {}
	virtual ~CMyobj() {}

	//모든 파생 클래스는 이 메서드를 가졌다고 가정할 수 있다.
	virtual int GetDeviceID() = 0;//순수 가상 함수

protected:
	int DeviceID;
};

//초기 제작자가 만든 함수
void PrintID(CMyobj* pobj)
{
	//실제 어떤 것일지는 모르지만 그래도 ID 출력할 수 있다.
	cout << "Device ID : " << pobj->GetDeviceID() << endl;
}

//후기 제작자의 코드
class CMytv : public CMyobj
{
public:
	CMytv(int ID) { DeviceID = ID; }

	virtual int GetDeviceID()
	{
		cout << "CMytv::GetDeviceID()" << endl;
		return DeviceID;
	}
};

class CMyPhone : public CMyobj
{
public:
	CMyPhone(int ID) 
	{
		DeviceID = ID;
	}
	virtual int GetDeviceID()
	{
		cout << "CMyPhone::GetDeviceID()" << endl;
		return DeviceID;
	}
};

//사용자 코드
int main()
{
	CMytv a(5);
	CMyPhone b(10);

	//실제객체가 무엇이든 알아서 자신의 ID를 출력
	PrintID(&a);
	PrintID(&b);
}