#pragma once
#include "Item.h"
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

