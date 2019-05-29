#include "Image.h"



Image::Image()
{
	Resolution_Height = 0;
	Resolution_Width = 0;
}


Image::~Image()
{
}

Image::Image(string name, string size, string extension, string genre, string contr, int W, int H) {
	this->Name = name;
	this->Contribuitors = contr;
	this->Extension = extension;
	this->Genre = genre;
	this->Size = size;
	this->Resolution_Height = H;
	this->Resolution_Width = W;
}

void Image::setResolution(int Height, int Width) {
	this->Resolution_Height = Height;
	this->Resolution_Width = Width;
}

string Image::GetResolution() {
	string aux = to_string(this->Resolution_Height) + "x" + to_string(this->Resolution_Width);
	return aux;
}