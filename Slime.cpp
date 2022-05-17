#include "Slime.h"
#include <iostream>
using namespace std;

Slime::Slime()
	: HP(0), Gold(0)
{
	cout << "슬라임 생성" << endl;
}

Slime::Slime(int NewHP, int NewGold)
{
	HP = NewHP;
	Gold = NewGold;
}

Slime::~Slime()
{
	cout << "슬라임 소멸" << endl;
}

void Slime::Move()
{
	cout << "슬라임 이동" << endl;
}