#include "RiceBalls.h"

RiceBalls::RiceBalls()
{
	RiceNum = 6;
	RiceOutput = "6";
	description = "There are ";
	description.Append(RiceOutput.CStr());
	description.Append(" rice balls in the container.");

}

RiceBalls::~RiceBalls()
{
}

void RiceBalls::Description() const
{
	description.WriteToConsole();
}

void RiceBalls::Use()
{
	RiceNum--;
	description = "";
	switch (RiceNum)
	{
		case 0: 
		{
			RiceOutput = "no more";
		
			break;
		}
		case 1:
		{
			RiceOutput = "1";
			description = "You eat a riceball\n";
			break;
		}
		case 2:
		{
			RiceOutput = "2";
			description = "You eat a riceball\n";
			break;
		}
		case 3:
		{
			RiceOutput = "3";
			description = "You eat a riceball\n";
			break;
		}
		case 4:
		{
			RiceOutput = "4";
			description = "You eat a riceball\n";
			break;
		}
		case 5:
		{
			RiceOutput = "5";
			description = "You eat a riceball\n";
			break;
		}

	default:
		break;
	}
	description.Append("There are ");
	description.Append(RiceOutput.CStr());
	description.Append(" rice balls in the container.");
}
