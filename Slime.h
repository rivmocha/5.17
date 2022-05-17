#pragma once
#include "Monster.h"

class Slime : public Monster
{
public:
	Slime();
	Slime(int NewHP, int NewGodl);
	virtual~Slime();

	int HP;
	int Gold;

	virtual void Move();
};

