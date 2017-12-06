#include "Pizza.h"
Pizza::Pizza()
{
	//constructor
}

string Pizza::getID(){
	return ID;
}

ostream& operator << (ostream& out, const Pizza& pizza)
{
	out<<pizza.ID<<", "<<pizza.price<<endl;

        return out;
}

istream& operator >>(istream& in, Pizza& pizza)
{
	cout<<"ID: ";
	in>>pizza.ID;
	cout<<"Price: ";
	in>>pizza.price;

	return in;
}
