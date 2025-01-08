#include <iostream>

using namespace std;

class CMy
{
public:
	CMy(int param)
	{
		m_ndata = new int;		//주소
		*m_ndata = param;		//값
	}
	//복사 생성자 선언 및 정의.
	CMy(const CMy& rhs)
	{
		cout << "CMy(const CMy&)" << endl;

		//메모리 할당
		m_ndata = new int;

		//포인터가 가리키는 위치에 값을 복사.
		*m_ndata = *rhs.m_ndata;
	}
	
	~CMy()
	{
		delete m_ndata;
	}

	CMy& operator=(const CMy& rhs)
	{
		*m_ndata = *rhs.m_ndata;

		//객체 자신에 대한 참조를 반환한다.
		return *this;
	}
	
	int Getdata()
	{
		if (m_ndata != NULL)
			return *m_ndata;

		return 0;
	}

private:
	int *m_ndata = nullptr;
};

int main()
{
	CMy a(10);
	CMy b(20);

	//단순 대입을 시도하면 모든 멤버의 값을 그대로 복사.
	a = b;
	cout << a.Getdata() << endl;
	
	return 0;

}