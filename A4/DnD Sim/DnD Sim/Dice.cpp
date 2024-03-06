#include "Dice.h"
#include <iostream>


Dice::Dice()
{

}

Dice::~Dice()
{
}

int Dice::Roll(int x, int d)
{
	int runningtotal = 0;

	if (d <= 0|| x <= 0)
	{
		return NULL;
	}


	for (int i = 0; i <= x; i++)
	{
			runningtotal = runningtotal + ((rand() % d - 1) + 1);
	}
	return runningtotal;
}



//int Dice::D20(int r)
//{
//	int D20 = ((rand() % 19) + 1); 
//	return D20;
//}
//
//int Dice::D10(int r)
//{
//	int D10 = ((rand() % 9) + 1);
//	return D10;
//}
//
//int Dice::D8(int r)
//{
//	int D8 = ((rand() % 7) + 1);
//	return D8;
//}
//
//int Dice::D6(int r)
//{
//	int D6 = ((rand() % 5) + 1);
//	return D6;
//}
//
//int Dice::D4(int r)
//{
//	int D4 = ((rand() % 3) + 1);
//	return D4;
//}


