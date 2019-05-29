#pragma once
#include "Media.h"
class Image :
	public Media
{
private:
	int Resolution_Width;
	int Resolution_Height;
public:
	Image();
	~Image();
	Image(string name, string size, string extension, string genre, string contr, int W, int H);
	void setResolution(int Height, int Width);
	string GetResolution();
};

