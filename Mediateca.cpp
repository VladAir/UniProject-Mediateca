#include <iostream>
#include "Movie.h"

using namespace std;


int main() {
	Movie Movie;
	Movie.setContribuitors("contr");
	Movie.setDuration(119);
	Movie.setExtension("ext");
	Movie.setGenre("Genre");
	Movie.setName("Name");
	Movie.setSize("132");
	cout << Movie.getDuration();
	return 0;
}