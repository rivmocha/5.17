#pragma once
#include "Monster.h"

class Boar : public Monster
{
public:
	Boar();
	Boar(int NewHP, int NewGodl);
	virtual~Boar();

	int HP;
	int Gold;

	virtual void Move();
};


