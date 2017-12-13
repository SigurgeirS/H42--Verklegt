#include "Pizza_size.h"

Pizza_size::Pizza_size()
{
	verbose = true;
}

string Pizza_size::getID(){
	return ID;
}

istream& operator >> (istream& in, Pizza_size& pizza_size){
	if(pizza_size.verbose){
		    cout << "Type in ID: ";
	}
    	in >> pizza_size.ID;
    	if(pizza_size.verbose){
    		cout << "Type a size name: ";
    	}
    		in >> pizza_size.name;
    	if(pizza_size.verbose){
    		cout << "Type in a pizza size price: ";
    	}
    	in >> pizza_size.price;
    	return in;
}

ostream& operator << (ostream& out,const Pizza_size& pizza_size){
	if(pizza_size.verbose == false){
    		out << pizza_size.ID <<endl<< pizza_size.name << endl << pizza_size.price << endl;
	}
	if(pizza_size.verbose){
		out<<"ID: "<<pizza_size.ID<<endl<<"Name: "<<pizza_size.name<<endl<<"Price: "<<pizza_size.price<<endl;
	}
    return out;
}
