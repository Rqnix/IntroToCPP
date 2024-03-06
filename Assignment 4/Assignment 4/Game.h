#pragma once
#include "StringUtil.h"
#include "Room.h"
#include "player.h"
#include "item.h"

class Game
{
private:
	Room rooms[2][2];
	Player* player;
	bool isplaying = false;
	int roomX;
	int roomY;
public:
	Game();
	~Game();
	void Run();
};