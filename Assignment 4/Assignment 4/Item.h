#pragma once
#include "StringUtil.h"
#include "Room.h"
#include "player.h"
#include "Game.h"
class Item
{
public:
	StringUtil description;
public:
	virtual void Description() const;
	virtual void Use();


};

