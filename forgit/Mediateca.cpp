#include <iostream>
#include "Movie.h"
#include "Tests.h"

using namespace std;

int main() {

	allTests();

	cout << endl;

	Movie Movie;
	Movie.setContribuitors("contr");
	Movie.setDuration(129);
	Movie.setExtension("ext");
	Movie.setGenre("Genre");
	Movie.setName("Name");
	Movie.setSize("132");
	cout << Movie.getDuration() << endl;

	system("pause");
}