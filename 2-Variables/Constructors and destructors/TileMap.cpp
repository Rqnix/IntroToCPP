#include "TileMap.h"

TileMap::~TileMap()
{
	for (int i = 0; i < height; i++)
	{
		delete[] tiles[i];
		
	}
	delete[] tiles; 
}
