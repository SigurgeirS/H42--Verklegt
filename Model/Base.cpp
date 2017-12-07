#include "Base.h"

using namespace std;
Base::Base()
{
    this->ID = "";
    this->base_name = "";
    this->price = 0;
}

Base::~Base()
{
    //dtor
}

string Base::get_id()
{
    return ID;
}

string Base::get_name(){
       return base_name;
}

double Base::get_price(){
       return price;
}
ostream& operator << (ostream& out, Base base)
{
    out << base.ID << "," << base.base_name << "," << base.price << endl;
    return out;
}

istream& operator >>(istream& in, Base& base)
{
    cout << "Type in an ID: " << endl;
    in >> base.ID;
    cout << "Type in a price: " << endl;
    in >> base.price;
    cout << "Type in a base name: " << endl;
    in >> base.base_name;
    return in;
}
