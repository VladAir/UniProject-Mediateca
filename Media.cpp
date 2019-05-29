#include "Media.h"

Media::Media()
{
}


Media::~Media()
{
}

Media::Media(string name, string size, string extension, string genre, string contr) {
	this->Name = name;
	this->Contribuitors = contr;
	this->Extension = extension;
	this->Genre = genre;
	this->Size = size;
}

void Media::setName(string name) {
	this->Name = name;
}
void Media::setSize(string Size) {
	this->Size = Size;
}
void Media::setExtension(string Extension) {
	this->Extension = Extension;
}
void Media::setGenre(string Genre) {
	this->Genre = Genre;
}
void Media::setContribuitors(string Contribuitors) {
	this->Contribuitors = Contribuitors;
}


string Media::getName() {
	return this->Name;
}
string Media::getSize() {
	return this->Size;
}
string Media::getExtension() {
	return this->Extension;
}
string Media::getGenre() {
	return this->Genre;
}
string Media::getContribuitors() {
	return this->Contribuitors;
}

