#include <iostream>
#include "timeoverloading.h"

const int MAX = 3; // 전처리 상수 선언과	정의
int main()
{
	Time* times[MAX]; //기초 클래스형 포인터 배열 선언 
	int day;
	int hours;
	int mins;
	char ch;
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << "번째 배열의 원소를 정의합니다." << endl;
		cout << "시간을 입력하시오 : ";
		cin >> hours;
		cout << "분을 입력하시오 : ";
		cin >> mins;
		cout << "일일 정보가 필요합니까? (y/n) : ";
		cin >> ch;
		if (ch == 'N' || ch == 'n')
		{
			times[i] = new Time(hours, mins); //각 원소에 기초 클래스형 동적 객체 할당
		}
		else
		{
			cout << "일을 입력하시오 : ";
			cin >> day;
			if (day < 0 || day > 31)
			{
				cout << "날짜 입력 오류! 0~31 사이의 값을 입력하세요." << endl;
				i--; //잘못된 입력 시 다시 입력 받기 위해 인덱스 감소
				continue;

			}
			times[i] =new  NewTime(day, hours, mins); //원소에 파생 클래스형 동적 객체 할당
		}


	}
	for (int i = 0; i < MAX; i++)
	{
		cout << i + 1 << "번째 배열의 원소 출력 : " << endl;
		times[i]->show(); //동적 결합 //배열의 각 원소가 가리키는 실제 객체의 형식에 따라 기초 클래스 또는 파생 클래스의 show() 메서드 호출 // 포인터이므로 -> 연산자 사용 .연산자는 객체에 직접 접근할 때 사용
	}

	//동적할당 해제
	for (int i = 0; i < MAX; i++)
	{
		delete times[i]; //times가 동적할당된 것이아니라 times[i]가 동적할당된 것이므로 times[i]를 해제
	}
}