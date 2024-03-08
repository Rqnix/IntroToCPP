#pragma once
#include "StringUtil.h"
#include "Item.h"
#include <vector>

class Player
{
private:
	std::vector <StringUtil> m_spell = {"fireball", "dragon", "power word kill"};

public:
	Player();
	~Player();
	bool FindSpell(StringUtil a_spell);
};

