<<<<<<< HEAD
#include "Topping.h"
#include<string.h>
/*
This class holds our Topping (in this case we just expect that we only choice one topping of any kind
*/
Topping::Topping()
{
    //ctor
}

Topping::Topping(char* name, double price)
{
    strcpy(this->name, name);
    this->price = price;
}


istream& operator >>(istream& in, Topping& topping)
{
    cout << "Name: ";
    in >> topping.name;
    cout << "Price: ";
    in >> topping.price;
    return in;
}

ostream& operator << (ostream& out,const Topping topping)
{
    out << topping.name << " " << topping.price;
    return out;
}
Topping::~Topping()
{
    //dtor
}
=======
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

>>>>>>> a8bf7059d9df22810c8fa6bd54be9ab501350072
