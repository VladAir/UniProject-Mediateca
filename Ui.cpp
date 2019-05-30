#include "Ui.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


Ui::Ui(Controller contr) :controller{contr}
{
    
}

void Ui::print_menu()
{
	cout << "1. ReadFiles";
    cout << "2. Exit " << endl;
}
void Ui::run()
{
	int choose = -1;
	while (choose != 0)
	{
		cout << "0. Exit" << endl;
		cout << "1. GetMovie" << endl;
		cout << "2. GetImage" << endl;
		cout << "3. GetMusic" << endl;
		cout << "Alegeti operatia" << endl;
		cin >> choose;

		if(choose == 1)
		{ }
		if (choose == 2)
		{ }
		if (choose == 3)
		{ }
	}
}
