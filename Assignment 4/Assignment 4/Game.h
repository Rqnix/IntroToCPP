#pragma once
#include "StringUtil.h"
#include "Room.h"
#include "Player.h"
#include "Lamp.h"
#include "Wand.h"
#include "RiceBalls.h"
#include <iostream>
using namespace std;

class Game
{
private:
	Room rooms[2][2] = { {Room(StringUtil("Room 1 (NW)\nThere is a lamp"), new Lamp()), Room(StringUtil("Room 2 (NE)\nThere is a wand."), new Wand())},
						 {Room(StringUtil("Room 3 (SW)"), nullptr), Room(StringUtil("Room 4 (SE)"), new RiceBalls())}};
	


	Player* player = nullptr;
	bool isplaying = false;
	int roomX = 0;
	int roomY = 0;
public:
	Game();
	~Game();
	void Run();
};