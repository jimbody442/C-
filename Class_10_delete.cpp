#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() : m_nData(0) {}

	int GetData(void) { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

	//실수로 double w자료형 실인수가 넘어오는 경우를 차단한다.
	void SetData(double dParam) = delete;

private:
	int m_nData;
};

int main()
{
	CMyData a;
	//CMyData ::SetData(int) 호출
	a.SetData(10);
	cout << "Data: " << a.GetData() << endl;

	CMyData b;
	//CMyData::SetData(double) 호출
	b.SetData(3.14); //CMyData::SetData(double) 호출 금지
	cout << b.GetData() << endl;

	return 0;
}

//// 삭제된 함수는 컴파일러가 해당 함수의 호출을 금지하도록 지시하는 기능입니다.
