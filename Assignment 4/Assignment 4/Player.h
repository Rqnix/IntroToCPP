#pragma once
#include "StringUtil.h"
#include "Room.h"
#include "item.h"
#include "Game.h"
#include <vector>

class Player
{
private:
	std::vector <StringUtil> m_spell = {"Fireball", "Dragon", "Power Word Kill"};
public:
	Player();
	~Player();
	bool FindSpell(StringUtil a_spell);
};

