//delete 예약어를 사용하여 컴파일 오류 발생 코드.
#include <iostream>

using namespace std;

class CMydata
{
private:
	int m_nData;

public:
	CMydata() : m_nData(0)
	{

	}
	int GetData(void) {
		return m_nData;
	}
	
	void SetData(int nParam) {
		m_nData = nParam;
	}

	//실수로 double 자료형 실인수가 넘어오는 경우를 차단한다.
	void SetData(double nParam) = delete;

};

int main()
{
	CMydata a;
	
	//CMydata::SetData(int)메서드가 호출된다.
	a.SetData(10);

	cout << a.GetData() << endl;

	CMydata b;
	
	//CMydata::SetData(double) 메서드가 호출된다.
	b.SetData(5.5);
	//double 자료형이 넘어가게되면 차단.(delete)
	cout << b.GetData() << endl;

	return 0;
}