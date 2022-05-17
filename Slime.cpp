#include "Slime.h"
#include <iostream>
using namespace std;

Slime::Slime()
{
	cout << "슬라임 생성" << endl;
}


Slime::~Slime()
{
	cout << "슬라임 소멸" << endl;
}

void Slime::Move()
{
	cout << "슬라임 이동" << endl;
}