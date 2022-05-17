#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include <vector>

#include <string>

using namespace std;



int main()
{
	//Player* MyPlayer = new Player(100, 100, 100);


	//���� 1~3���� ����
	srand(static_cast<unsigned int>(time(nullptr)));

	int SpawnCount = rand() % 3 + 1;
	vector<Monster*> Monsters;
	Monsters.push_back(new Goblin);
	Monsters.push_back(new Slime);
	Monsters.push_back(new Boar);

	//Tick ���� �̵�
	for (int i = 0; i < Monsters.size(); ++i)
	{
		Monsters[i] ->Move();
	}

	// �����ߴ� ���� ����
	for (int i = 0; i < Monsters.size(); ++i)
	{
		delete Monsters[i];
	}



	//delete MyPlayer;



	return 0;
}