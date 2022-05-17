#include "Boar.h"
#include <iostream>
using namespace std;

Boar::Boar()
	: HP(0), Gold(0)
{
	cout << "와일드보어 생성" << endl;
}

Boar::Boar(int NewHP, int NewGold)
{
	HP = NewHP;
	Gold = NewGold;
}

Boar::~Boar()
{
	cout << "와일드보어 소멸" << endl;
}

void Boar::Move()
{
	cout << "와일드보어 이동" << endl;
}
