#include "Pizza.h"
//REMEMBER VERBOSE IN REPOSITORY.
Pizza::Pizza()
{
	//constructor
}

string Pizza::getID(){
	return ID;
}

ostream& operator << (ostream& out, const Pizza& pizza)
{
	if(pizza.verbose == false){
		out<<pizza.ID<<endl<<pizza.price<<endl;
	}
	if(pizza.verbose == true){
		out<<"ID: "<<pizza.ID<<endl<<"Price: "<<pizza.price<<endl;
	}

        return out;
}

istream& operator >> (istream& in, Pizza& pizza)
{
	if(pizza.verbose){
		cout<<"ID: ";
	}
	in>>pizza.ID;
	if(pizza.verbose){
		cout<<"Price: ";
	}
	in>>pizza.price;

	return in;
}
