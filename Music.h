#pragma once
#include "Media.h"
class Music :
	public Media
{
private:
	int Duration;
public:
	Music();
	~Music();
	Music(string name, string size, string extension, string genre, string contr, int Duration);
	string getDuration();
	void setDuration(int dur);
};

