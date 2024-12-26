#define _CRT_SECURE_NO_WARNINGS
#include "Starcft.h"
#include <iostream>
#include <cstring>
using namespace std;

Marine::Marine() {			//default 생성자.
	hp = 50;
	coord_x = coord_y = 0;
	damage = 5;
	is_dead = false;
	name = NULL;
}

Marine::Marine(int x, int y, const char* marine_name) {		// 매개변수가 있는 생성자.
	name = new char[strlen(marine_name) + 1];
	strcpy(name, marine_name);
	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
}

Marine::Marine(int x, int y)
{
	coord_x = x;
	coord_y = y;
	hp = 50;
	damage = 5;
	is_dead = false;
	name = NULL;
}

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}

int Marine::attack() {
	return damage;
}

void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0)
		is_dead = true;
}

void Marine::show_status() {
	cout << "*** Marine ***" <<name<<"***"<< endl;
	cout << "Location : (" << coord_x << "," << coord_y << ")" << endl;
	cout << "HP : " << hp << endl;
}

Marine::~Marine() {
	cout << name << "의 소멸자 호출!" << endl;
	if (name != NULL)
	{
		delete[]name;
	}

}
