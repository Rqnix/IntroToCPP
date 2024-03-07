#include "Lamp.h"
#include <iostream>
using namespace std;


Lamp::Lamp()
{
	description = "The lamp is off.";
}

Lamp::~Lamp()
{

}

void Lamp::Description() const
{
	description.WriteToConsole();
}

void Lamp::Use()
{
	if (isTurnedOn == true)
	{
		isTurnedOn = false;
		description = "The lamp is off.";
	}
	else if(isTurnedOn == false)
	{
		isTurnedOn = true;
		description = "The lamp is on.";
	}
	Description();
}
