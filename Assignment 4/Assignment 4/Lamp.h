#pragma once
#include "StringUtil.h"
#include "Room.h"
#include "Game.h"
#include "Item.h"
#include "Player.h"

class Lamp : public Item
{
private:
	bool isTurnedOn = false;
public:
	Lamp();
	~Lamp();

public:
	void Description() const override;
	void Use() override;
};
