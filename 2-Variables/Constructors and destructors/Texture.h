#pragma once
#include <iostream>
#include <string> 

class Texture
{
public:
	Texture(char* a_filepath, int a_width, int a_height, int a_bytes_per_pixel)
	{
		int path_len = strlen(a_filepath);
		filepath = new char[path_len + 1];
		strcpy_s(filepath, path_len+1, a_filepath);

		width = a_width;
		height = a_height;

		pixel_data = new char[width * height * a_bytes_per_pixel];
	}
	~Texture();
	char* filepath;
	char* pixel_data;
	int width;
	int height;
};

