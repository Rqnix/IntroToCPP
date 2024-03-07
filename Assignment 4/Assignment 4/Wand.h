#pragma once
#include "StringUtil.h"
#include "Room.h"
#include "Game.h"
#include "Item.h"
#include "Player.h"

class Wand : public Item
{
public:
	Wand();
	~Wand();

public:
	void Description() const override;
	void Use() override;
	
};

