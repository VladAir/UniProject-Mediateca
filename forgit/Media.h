#pragma once
#include <vector>
#include <string>

using namespace std;

class Media
{
protected:
	string Name;
	string Size;
	string Extension;
	string Genre;
	string Contribuitors;
public:
	Media();
	~Media();
	Media(string name, string size, string extension, string genre, string contr);
	string getName();
	string getSize();
	string getExtension();
	string getGenre();
	string getContribuitors();
	void setName(string name);
	void setSize(string Size);
	void setExtension(string Extension);
	void setGenre(string Genre);
	void setContribuitors(string Contribuitors);
	Media *clone();
};

