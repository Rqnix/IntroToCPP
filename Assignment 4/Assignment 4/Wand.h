#pragma once
#include "Item.h"

class Wand : public Item
{
public:
	Wand();
	~Wand();

public:
	void Description() const override;
	void Use() override;
	
};

