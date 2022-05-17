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


	//몬스터 1~3마리 생성
	srand(static_cast<unsigned int>(time(nullptr)));

	int SpawnCount = rand() % 3 + 1;
	vector<Monster*> Monsters;
	Monsters.push_back(new Goblin);
	Monsters.push_back(new Slime);
	Monsters.push_back(new Boar);

	//Tick 몬스터 이동
	for (int i = 0; i < Monsters.size(); ++i)
	{
		Monsters[i] ->Move();
	}

	// 출현했던 몬스터 제거
	for (int i = 0; i < Monsters.size(); ++i)
	{
		delete Monsters[i];
	}



	//delete MyPlayer;



	return 0;
}