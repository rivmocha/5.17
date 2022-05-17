#pragma once


class AActor
{
public:
	AActor();
	~AActor();
	
	int HP;
	int Gold;

	void Move();
	void Attack();
};

