#pragma once


class Monster
{
public:
	Monster();
	~Monster();

	int HP;
	int Gold;

	void Move();
	void Attack();
	void Drop();

};

