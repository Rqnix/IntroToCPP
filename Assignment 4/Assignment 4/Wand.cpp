#include "Wand.h"
#include <iostream>

Wand::Wand()
{
	description = "This can be used to cast spells";
}

Wand::~Wand()
{
}

void Wand::Description() const
{
	description.WriteToConsole();
}

void Wand::Use()
{
	StringUtil description2 = "you pick up the wand";
	description2.WriteToConsole();
	hasWand == true;
}
