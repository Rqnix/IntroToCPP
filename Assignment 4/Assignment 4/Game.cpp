#include "Game.h"
using namespace std;

Game::Game()
{
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
		strIn.ToLower();
		if (strIn == "n")
		{
			roomY--;
			if (roomY <= -1)
			{
				roomY = 0;
			}
		}
		else if(strIn == "s")
		{
			roomY++;

			if (roomY >= 2)
			{
				roomY = 1;
			}
			
		}
		else if (strIn == "w")
		{
			roomX--;
			if (roomX <= -1)
			{
				roomX = 0;
			}
		}
		else if (strIn == "e")
		{
			roomX++;
			if (roomX >= 2)
			{
				roomX = 1;

			}
		}
		else
		{
		
		}

		
		
		if (strIn.Find("spell") != -1)
		{
			/*if (hasWand == true)
			{*/
				strIn.Replace("spell ", "");
				if (player->FindSpell(strIn))
				{
					strIn.Prepend("You have the spell ");
					strIn.WriteToConsole();
				}
				else
				{
					strIn = "You do not have this spell.";
					strIn.WriteToConsole();
				}
			//}
			
			
		}

		if (strIn == "use") { rooms[roomY][roomX].m_item->Use(); }

		rooms[roomY][roomX].Description();

	}
}
