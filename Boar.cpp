#include "Boar.h"
#include <iostream>
using namespace std;

Boar::Boar()
	: HP(0), Gold(0)
{
	cout << "���ϵ庸�� ����" << endl;
}

Boar::Boar(int NewHP, int NewGold)
{
	HP = NewHP;
	Gold = NewGold;
}

Boar::~Boar()
{
	cout << "���ϵ庸�� �Ҹ�" << endl;
}

void Boar::Move()
{
	cout << "���ϵ庸�� �̵�" << endl;
}
