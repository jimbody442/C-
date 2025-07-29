//접근 지시자 priavate
#include <iostream>
using namespace std;

class CMyData
{
	//기본 접근 지시자는 private 이다
	int m_nData; //멤버 데이터

public:
	int GetData(void)
	{
		return m_nData; //멤버 데이터 접근
	}
	void SetData(int nParam)
	{
		m_nData = nParam; // 멤버 데이터 접근하여 값 변화
	}
};

int main()
{
	CMyData data; // CMyData 객체 생성
	data.SetData(10); // SetData() 멤버 함수 호출, 데이터를 10으로 설정
	cout << "함수를 이용하여 값에 접근한 m_ndata의 값 : " <<data.GetData()<< endl; // GetData() 멤버 함수 호출, m_nData 값을 반환
	// data.m_nData = 20; // 오류 발생, private 멤버 데이터에 직접 접근할 수 없음
}