#include "Constructor.h"
#include <iostream>
using namespace std; 

Player::Player()
{
	X = 0;
	Y = 0;
	ammo = 0;
	max_ammo = 30;
	health = 100;
	max_health = 100;
	
}

Player::Player(const char* name)
{

}

Player::Player(int a_max_ammo, int a_max_health)
{
	X = 0;
	Y = 0;
	ammo = a_max_ammo;
	max_ammo = a_max_health;
	health = 100;
	max_health = 100;
}

Player::Player(float x, float y)
{
	X = x;
	Y = y;
	ammo = 0;
	max_ammo = 30;
	health = 100;
	max_health = 100;
}

Player::Player(Player& a_player)
{

}
