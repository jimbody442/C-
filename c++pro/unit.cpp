#include <iostream>

class Marine {
private:
	int hp;				//체력
	int coord_x, coord_y;	//위치
	int damage;
	bool is_dead;

public:
	Marine();	//default 생성자.
	Marine(int x, int y);

	int attack();					//데미지를 리턴
	void be_attacked(int damage_earn);	// 입은 데이미
	void move(int x, int y);

	void show_status();
};