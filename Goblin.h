#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
	Goblin();
	Goblin(int NewHP, int NewGodl);
	virtual~Goblin();

	int HP;
	int Gold;

	virtual void Move();
};

