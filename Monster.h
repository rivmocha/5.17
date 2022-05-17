#pragma once


class Monster
{
public:
	Monster();
	Monster(int NewHP, int NewGodl);
	virtual~Monster();

	int HP;
	int Gold;

	virtual void Move();
	void Attack();
	void Drop();

};

