#pragma once
#include "AActor.h"

class Player : public AActor
{
public:
	Player();
	~Player();

	int MP;

	void Pickup();
};

