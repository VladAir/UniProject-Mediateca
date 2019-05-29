#include "Controller.hpp"
#include <iostream>

using namespace std;

#ifndef Ui_hpp
#define Ui_hpp

class Ui
{
private:
    Controller controller;
public:
    Ui(Controller contr);
 
    void print_menu();
    void run();
};

#endif
