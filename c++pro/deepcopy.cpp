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
	Photo_Cannon(int x, int y, const char* connon_name);
	Photo_Cannon(const Photo_Cannon& pc);
	~Photo_Cannon();

	void show_status();
};



Photo_Cannon::Photo_Cannon(int x, int y, const char* cannon_name)
{
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = new char[strlen(cannon_name) + 1];
	strcpy(name, cannon_name);
}



Photo_Cannon::~Photo_Cannon() {
	//0�� �ƴ� ���� if������ true�� ó���ǹǷ�
	// 0���� �ƴ����� ���� �� �׳� if(name)�ϸ�
	// if(name!=0)�� ������ �ǹ̸� ������ ����.

	// ����� if�� ������ ������ 1���� �´ٸ�
	//�߰�ȣ ���� ����.
	if (name)
		delete[] name;
}




Photo_Cannon::Photo_Cannon(int x, int y) {

	cout << "������ ȣ�� !" << endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = NULL;
}

Photo_Cannon::Photo_Cannon(const Photo_Cannon& pc) {
	cout << "���� ������ ȣ��!" << endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;

	name = new char[strlen(pc.name) + 1];
		strcpy(name, pc.name);
}


void Photo_Cannon::show_status() {
	cout << "phto cannon " << name << endl;
	cout << "Location : (" << coord_x << "," << coord_y << ")" << endl;
}








int main() {
	Photo_Cannon pc1(3, 3,"Cannon");	//Photo_Cannon(int x, int y, const char*)ȣ��
	//Photo_Cannon(const Photo_Cannon& pc) ȣ��
	Photo_Cannon pc2 = pc1;	//Photo_Cannon(const Photo_Cannon & pc) ȣ�� ���� ���� �ǹ�.

	pc1.show_status();
	pc2.show_status();
}

