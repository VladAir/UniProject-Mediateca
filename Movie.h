#pragma once
#include "Media.h"
class Movie :
	public Media
{
private:
	int Duration;
public:
	Movie();
	~Movie();
	Movie(string name, string size, string extension, string genre, string contr, int Duration);
	string getDuration();
	void setDuration(int dur);
};

