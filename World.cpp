#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"



World::World()
{
	//Init();
}

World::~World()
{
	Term();

}

void World::Term()
{
	// 출현했던 캐릭터 제거                         
	for (size_t i = 0; i < Characters.size(); ++i)
	{
		delete Characters[i];
	}
}


void World::Init()
{
	//몬스터, 플레이어 생성하기
	srand(static_cast<unsigned int>(time(nullptr)));

	int SpawnCount = rand() % 3 + 1;

	//생성할 캐릭터
	Characters.push_back(new Player);
	Characters.push_back(new Goblin);
	Characters.push_back(new Slime);
	Characters.push_back(new Boar);

}

void World::Tick()
{
	//Tick 캐릭터 이동
	for (unsigned int i = 0; i < Characters.size(); ++i)
	{
		Characters[i]->Move();
	}

}

void World::Render()
{
}


