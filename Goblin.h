#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
	Goblin();
	Goblin(int NewHP, int NewGold);
	virtual~Goblin();

	int HP;
	int Gold;

	virtual void Move() override;
};

