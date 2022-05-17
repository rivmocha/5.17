#pragma once
#include "Monster.h"

class Boar : public Monster
{
public:
	Boar();
	Boar(int NewHP, int NewGold);
	virtual~Boar();

	int HP;
	int Gold;

	virtual void Move() override;
};


