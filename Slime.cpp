#include "Slime.h"
#include <iostream>
using namespace std;

Slime::Slime()
	: HP(0), Gold(0)
{
	cout << "������ ����" << endl;
}

Slime::Slime(int NewHP, int NewGold)
{
	HP = NewHP;
	Gold = NewGold;
}

Slime::~Slime()
{
	cout << "������ �Ҹ�" << endl;
}

void Slime::Move()
{
	cout << "������ �̵�" << endl;
}