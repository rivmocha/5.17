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
	// �����ߴ� ĳ���� ����                         
	for (size_t i = 0; i < Characters.size(); ++i)
	{
		delete Characters[i];
	}
}


void World::Init()
{
	//����, �÷��̾� �����ϱ�
	srand(static_cast<unsigned int>(time(nullptr)));

	int SpawnCount = rand() % 3 + 1;

	//������ ĳ����
	Characters.push_back(new Player);
	Characters.push_back(new Goblin);
	Characters.push_back(new Slime);
	Characters.push_back(new Boar);

}

void World::Tick()
{
	//Tick ĳ���� �̵�
	for (unsigned int i = 0; i < Characters.size(); ++i)
	{
		Characters[i]->Move();
	}

}

void World::Render()
{
}


