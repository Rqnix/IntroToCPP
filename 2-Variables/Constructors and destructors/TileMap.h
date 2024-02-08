#pragma once
class TileMap
{
public:
	struct Tile{ int x, y; int tile_value;};
	TileMap(int a_width, int a_height)
	{
		width = a_width;
		height = a_height;

		tiles = new Tile * [height];

		for (int row_index = 0;
			row_index < height;
			++row_index)
		{
			tiles[row_index] = new Tile[width];
		}
	}
	~TileMap();

	int width;
	int height;
	Tile** tiles;
};

