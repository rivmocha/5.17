#include "Goblin.h"
#include <iostream>
using namespace std;

Goblin::Goblin()
	: HP(0), Gold(0)
{
	cout << "��� ����" << endl;
}

Goblin::Goblin(int NewHP, int NewGold)
{
	HP = NewHP;
	Gold = NewGold;
}

Goblin::~Goblin()
{
	cout << "��� �Ҹ�" << endl;
}

void Goblin::Move()
{
	cout << "��� �̵�" << endl;
}
