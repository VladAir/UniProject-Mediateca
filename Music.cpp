#include "Music.h"



Music::Music()
{
}


Music::~Music()
{
}

Music::Music(string name, string size, string extension, string genre, string contr, int Duration) {
	this->Name = name;
	this->Contribuitors = contr;
	this->Extension = extension;
	this->Genre = genre;
	this->Size = size;
	this->Duration = Duration;
}

string Music::getDuration() {
	string aux = to_string(this->Duration / 60) + " ore";
	if (this->Duration / 60 == 1) { aux = "o ora"; }
	return "Filmul " + this->Name + " dureaza " + aux + " si " + to_string(this->Duration - this->Duration / 60 * 60) + " minute";
}

void Music::setDuration(int dur) {
	this->Duration = dur;
}
