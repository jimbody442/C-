//클래스를 작성할 때 복사 생성자를 생략하면 디폴트 생성자처럼 컴파일러가 알아서 만들어 넣어준다.
#include <iostream>

using namespace std;

class CMydata
{
private:
	int m_ndata=0;

public:
	CMydata() {
		cout << "CMydata()" << endl;
	}
	CMydata(const CMydata& rhs) : m_ndata(rhs.m_ndata)
	{
		this->m_ndata = rhs.m_ndata;
		cout << "CMydata(const CMydata &)" << endl;
	}

	int Getdata(void) const {
		return m_ndata;
	}
	void Setdata(int n_param)
	{
		m_ndata = n_param;
	}
};

int main()
{
	CMydata a;
	a.Setdata(10);

	CMydata b(a);
	cout << b.Getdata() << endl;
}



//아직헷갈리지만 this->는 호출하는 인스턴스의 변수를 의미?
//위에서의 this->는 CMydata b에서 a를 &rhs로 받음.
//this->m_ndata는 b.m_ndata와 같은 의미?
