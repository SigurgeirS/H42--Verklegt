#include "Pizza_menu.h"
#include "Topping.h"
#include <iostream>
using namespace std;

Pizza_menu::Pizza_menu()
{
    this->ID = 0;
    this->name = "";
}

Pizza_menu::~Pizza_menu()
{
    //dtor
}

int Pizza_menu::get_id(){
    return ID;
}

istream& operator >> (istream& in, Pizza_menu& pizza_menu){
    cout << "Type in a ID: " << endl;
    in >> pizza_menu.ID;
    cout << "Type in a name: " << endl;
    in >> pizza_menu.name;
    return in;
}

ostream& operator << (ostream& out,const Pizza_menu& pizza_menu){
    Topping toppings;
    out << pizza_menu.ID << " " << pizza_menu.name << " " << endl;
    return out;
}
