#include "Goblin.h"
#include <iostream>
using namespace std;

Goblin::Goblin()
	: HP(0), Gold(0)
{
	cout << "고블린 생성" << endl;
}

Goblin::Goblin(int NewHP, int NewGold)
{
	HP = NewHP;
	Gold = NewGold;
}

Goblin::~Goblin()
{
	cout << "고블린 소멸" << endl;
}

void Goblin::Move()
{
	cout << "고블린 이동" << endl;
}
