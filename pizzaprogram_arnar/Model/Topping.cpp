#include "Topping.h"
#include<string.h>
/*
This class holds our Topping (in this case we just expect that we only choice one topping of any kind
*/
Topping::Topping()
{
    this->ID = "";
    this->name = "";
    this->price = 0;
    this->verbose = true;
}

string Topping::get_id()
{
    return ID;
}

string Topping::get_name(){
       return name;
}

double Topping::get_price(){
       return price;
}

istream& operator >> (istream& in, Topping& topping)
{
	if(topping.verbose){
	    cout << "Type in an topping ID: " << endl;
	}
    	in >> topping.ID;

    	if(topping.verbose){
    		cout << "Type in an topping name: " << endl;
    	}

    	in >> topping.name;

    	if(topping.verbose){
	    cout << "Type in an topping price: " << endl;
	}

    		in >> topping.price;

    	return in;
}

ostream& operator << (ostream& out, const Topping& topping)
{
	if(topping.verbose == false){
    		out << topping.ID << endl << topping.name << endl << topping.price << endl;
	}
	if(topping.verbose == true){
		out<<"ID: "<<topping.ID<<endl<<"Name: "<<topping.name<<endl<<"Price: "<<topping.price<<endl;
	}
    return out;
}
