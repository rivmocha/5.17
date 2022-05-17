#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()		//»ý¼ºÀÚ
	: HP(0), MP(0), Gold(0)
{
	
}

Player::Player(int NewHP, int NewMP, int NewGold)
{
	HP = NewHP;
	MP = NewMP;
	Gold = NewGold;
}

Player::~Player()
{
}

void Player::Move()
{
}

void Player::Attack()
{
}

void Player::Pickup()
{
}
