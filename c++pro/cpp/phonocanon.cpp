#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

using namespace std;

class Photo_Cannon {
	int hp, shield;
	int coord_x, coord_y;
	int damage;

	char* name;

public:
	Photo_Cannon(int x, int y);
	Photo_Cannon(int x, int y, const char*connon_name);
	~Photo_Cannon();

	void show_status();
};

Photo_Cannon::Photo_Cannon(int x,int y, const char* cannon_name)
{
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = new char[strlen(cannon_name) + 1];
	strcpy(name, cannon_name);
}
Photo_Cannon::~Photo_Cannon() {
	//0이 아닌 값은 if문에서 true로 처리되므로
	// 0인지 아닌지를 비교할 때 그냥 if(name)하면
	// if(name!=0)과 동일한 의미를 가질수 있음.

	// 참고로 if문 다음에 문장이 1개만 온다면
	//중괄호 생략 가능.
	if (name)
		delete[] name;
}

Photo_Cannon::Photo_Cannon(int x, int y) {

	cout << "생성자 호출 !" << endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = NULL;
}

void Photo_Cannon::show_status() {
	cout << "phto cannon " << name <<endl;
	cout << "Location : (" << coord_x << "," << coord_y << ")" << endl;
}
int main() {
	Photo_Cannon pc1(3, 3);	//Photo_Cannon(int x, int y)호출
	//Photo_Cannon(const Photo_Cannon& pc) 호출
	Photo_Cannon pc2 = pc1;	//Photo_Cannon(const Photo_Cannon & pc) 호출 위와 같은 의미.

	pc1.show_status();
	pc2.show_status();
}

//shallow copy로 인한 런타임 오류발생.
