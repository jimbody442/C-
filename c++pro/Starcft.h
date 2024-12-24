#ifndef STAR_H
#define STAR_H
#include <iostream>
#include <string>

class Marine {
private:
	int hp;				//ü��
	int coord_x, coord_y;	//��ġ
	int damage;
	bool is_dead;
	char* name;		//���� �̸�.

public:
	Marine();	//default ������.
	Marine(int x, int y, const char* marine_name);
	Marine(int x, int y);
	~Marine();

	int attack();					//�������� ����
	void be_attacked(int damage_earn);	// ���� ���̹�
	void move(int x, int y);

	void show_status();
};

#endif