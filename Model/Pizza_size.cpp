#include "Pizza_size.h"
#include<iostream>
using namespace std;
Pizza_size::Pizza_size()
{
    this->price = 0;
    this->ID = "";
    this->size = 0;
}

Pizza_size::~Pizza_size()
{
    //dtor
}

int Pizza_size::get_size(){
    return size;
}

double Pizza_size::get_price(){
    return price;
}

istream& operator >> (istream& in, Pizza_size& pizza_size)
{
    cout << "Type in a size ID: " << endl;
    in >> pizza_size.ID;
    cout << "Type in a size:";
    in >> pizza_size.size;
    cout << "Type in a pizza size price: " << endl;
    in >> pizza_size.price;
    return in;
}

ostream& operator << (ostream& out,const Pizza_size& pizza_size)
{
    out << pizza_size.ID << "," << pizza_size.size << "," << pizza_size.price << endl;
    return out;
}
