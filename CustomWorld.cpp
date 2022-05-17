#include "CustomWorld.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

CustomWorld::CustomWorld()
{
}

CustomWorld::~CustomWorld()
{
}

void CustomWorld::Init()
{
		//생성할 캐릭터
	Characters.push_back(new Player);
	Characters.push_back(new Goblin);
	Characters.push_back(new Slime);
	Characters.push_back(new Boar);
}
