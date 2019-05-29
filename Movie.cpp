#include "Movie.h"

Movie::Movie()
{
}


Movie::~Movie()
{
}

Movie::Movie(string name, string size, string extension, string genre, string contr, int Duration) {
	this->Name = name;
	this->Contribuitors = contr;
	this->Extension = extension;
	this->Genre = genre;
	this->Size = size;
	this->Duration = Duration;
}

string Movie::getDuration() {
	string aux = to_string(this->Duration / 60) + " ore";
	if (this->Duration / 60 == 1) { aux = "o ora"; }
	return "Filmul " + this->Name + " dureaza " + aux + " si " + to_string(this->Duration - this->Duration/60*60) + " minute" ;
}

void Movie::setDuration(int dur) {
	this->Duration = dur;
}

Movie* Movie::Clone() {
	
	Movie *NewObject = new Movie(this->Name,this->Size,this->Extension,this->Genre,
								 this->Contribuitors,this->Duration);
	return NewObject;
}
