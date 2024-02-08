#pragma once
class Destructors
{
public:
	struct Bullet { float x, y; };
	Destructors(int max_ammo);
	~Destructors();

	int health;
	int max_health;
	int ammo;
	int max_ammo;
	Bullet* bullets;
};

