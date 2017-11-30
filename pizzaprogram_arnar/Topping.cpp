#include "Topping.h"
#include<string.h>
Topping::Topping()
{
    //ctor
}

Topping::Topping(char* name, double price){
    strcpy(this->name, name);
    this->price = price;
}


istream& operator >>(istream& in, Topping& topping){
   // cout << "Name:";
    in >> topping.name;
    //cout << "Price: ";
    cout << endl;
    in >> topping.price;
    return in;
}

    ostream& operator << (ostream& out,const Topping topping){
     out << topping.name << " " << topping.price;
     return out;
    }
Topping::~Topping()
{
    //dtor
}
