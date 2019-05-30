#include "Tests.h"
#include "Media.h"
#include "Movie.h"
#include "Music.h"
#include "Image.h"
#include "Repository.h"
#include <assert.h>
#include <string>
#include <iostream>

using namespace std;

void mediaTests()
{
	Media m;

	m.setGenre("pop");
	assert(m.getGenre().compare("pop") == 0);
}

void movieTests()
{
	Movie m;

	m.setGenre("thriller");
	assert(m.getGenre().compare("thriller") == 0);
}

void imageTests()
{
	Image i;

	i.setName("The Sea");
	assert(i.getName().compare("The Sea") == 0);
}

void musicTests()
{
	Music m;

	m.setGenre("pop");
	assert(m.getGenre().compare("pop") == 0);
}

void repositoryTests()
{
	
}

void allTests()
{	
	mediaTests();
	movieTests();
	imageTests();
	musicTests();
	repositoryTests();

	cout << "All tests passed." << endl;
}
