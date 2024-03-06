#include "Game.h"
using namespace std;

Game::Game()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			rooms[i][j] = Room();
		}
	}
	player = new Player();
	isplaying = false;
	roomX = 0;
	roomY = 0;
}

Game::~Game()
{

}

void Game::Run()
{
	isplaying = true;
	StringUtil strIn = "No";
	while (isplaying == true)
	{
		
		strIn.ReadFromConsole();
		if (strIn == "n")
		{
			roomY--;
		}
		else if(strIn == "s")
		{
			roomY++;
		}
		else if (strIn == "w")
		{
			roomX--;
		}
		else if (strIn == "e")
		{
			roomX++;
		}
		else
		{

		}

		//safety statements
		if (roomX >= 2) 
		{
			roomX = 1;
		}
		if (roomY >= 2)
		{
			roomY = 1;
		}
		if (roomY <= -1)
		{
			roomY = 0;
		}
		if (roomX <= -1)
		{
			roomX = 0;
		}


	}
}
