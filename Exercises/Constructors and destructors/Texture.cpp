#include "Texture.h"

Texture::~Texture()
{
	delete[] filepath;
	delete[] pixel_data; 
}
