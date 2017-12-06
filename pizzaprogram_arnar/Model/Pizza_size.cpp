#include "Pizza_size.h"

Pizza_size::Pizza_size()
{
	//constructor
}

string Pizza_size::getID(){
	return ID;
}

Pizza_size::~Pizza_size()
{
    //dtor
}

istream& operator >> (istream& in, Pizza_size& pizza_size){
    cout << "Type in ID: " << endl;
    in >> pizza_size.ID;
    cout << "Type a size name: ";
    in >> pizza_size.name;
    cout << "Type in a pizza size price: " << endl;
    in >> pizza_size.price;
    return in;
}

ostream& operator << (ostream& out,const Pizza_size& pizza_size){
    out << pizza_size.ID <<" "<< pizza_size.name << " " << pizza_size.price << endl;
    return out;
}
