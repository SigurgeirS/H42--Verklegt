#include "Topping.h"
#include<string.h>
/*
This class holds our Topping (in this case we just expect that we only choice one topping of any kind
*/
Topping::Topping()
{
  ID = 0;
}

void auto_increment_id()
{

}

int Topping::get_id()
{
    return ID;
}

istream& operator >> (istream& in, Topping& topping)
{
    cout << "Type in an topping ID: " << endl;
    in >> topping.ID;
    cout << "Type in an topping name: " << endl;
    in >> topping.name;
    cout << "Type in an topping price: " << endl;
    in >> topping.price;
    return in;
}

ostream& operator << (ostream& out,const Topping topping)
{
    out << topping.ID << " " << topping.name << " " << topping.price << endl;
    return out;
}
Topping::~Topping()
{
    //dtor
}
