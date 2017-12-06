#include "Topping.h"

Topping::Topping()
{
  //constructor
}

string Topping::get_id()
{
    return ID;
}

istream& operator >> (istream& in, Topping& topping)
{
    cout << "Type in a topping ID: " << endl;
    in >> topping.ID;
    cout << "Type in a topping name: " << endl;
    in >> topping.name;
    cout << "Type in a topping price: " << endl;
    in >> topping.price;
    return in;
}

ostream& operator << (ostream& out,const Topping topping)
{
    out << topping.ID << ", " << topping.name << ", " << topping.price << endl;
    return out;
}
Topping::~Topping()
{
    //dtor
}

