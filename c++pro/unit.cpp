#include <iostream>

class Marine {
private:
	int hp;				//ü��
	int coord_x, coord_y;	//��ġ
	int damage;
	bool is_dead;

public:
	Marine();	//default ������.
	Marine(int x, int y);

	int attack();					//�������� ����
	void be_attacked(int damage_earn);	// ���� ���̹�
	void move(int x, int y);

	void show_status();
};