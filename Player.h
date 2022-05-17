#pragma once
#include "Character.h"


class Player : public Character			//ĳ���͸� ��� �޴´�.
{
public:
	Player();
	Player(int NewHP, int NewMP, int NewGold);
	virtual~Player();

	
	int HP;
	int MP;
	int Gold;

	virtual void Move() override;
	virtual void Attack() override;
	void Pickup();


};

