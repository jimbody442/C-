#ifndef STAR_H
#define STAR_H
#include <iostream>
#include <string>

class Marine {
private:
	int hp;				//체력
	int coord_x, coord_y;	//위치
	int damage;
	bool is_dead;
	char* name;		//마린 이름.

public:
	Marine();	//default 생성자.
	Marine(int x, int y, const char* marine_name);
	Marine(int x, int y);
	~Marine();

	int attack();					//데미지를 리턴
	void be_attacked(int damage_earn);	// 입은 데이미
	void move(int x, int y);

	void show_status();
};

#endif