#include "Destructors.h"


//Destructors::Destructors(int max_ammo)
//{
//	
//	bullets = new Bullet[max_ammo];
//	ammo = 0;
//	health = 0;
//	max_health = 100;
//	
//}

Destructors::~Destructors()
{
	delete[] bullets; 
}
