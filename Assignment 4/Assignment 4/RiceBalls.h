#pragma once
#include "Item.h"
class RiceBalls : public Item
{
private:
	int RiceNum;
	StringUtil RiceOutput;
public:
	RiceBalls();
	~RiceBalls();

public:
	void Description() const override;
	void Use() override;
};

