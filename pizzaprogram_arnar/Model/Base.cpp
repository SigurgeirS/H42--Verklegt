#include <iostream>
#include "Base.h"

using namespace std;
Base::Base()
{
}

Base::~Base()
{
    //dtor
}

string Base::get_id(){
    return ID;
}

ostream& operator << (ostream& out, Base base){
    out << base.ID << ", " << base.base_name << ", " << base.price << endl;
    return out;
}

istream& operator >>(istream& in, Base& base){
    cout << "Type in an ID: " << endl;
    in >> base.ID;
    cout << "Type in a price: " << endl;
    in >> base.price;
    cout << "Type in a base name: " << endl;
    in >> base.base_name;
    return in;
}
