#include <iostream>
#include "Base.h"

using namespace std;
Base::Base()
{
	verbose = true;
}

string Base::get_id(){
    return ID;
}

ostream& operator << (ostream& out, const Base& base){
	if(base.verbose == false){
		out << base.ID << endl << base.name << endl << base.price << endl;
	}
	if(base.verbose == true){
		out<<"ID: "<<base.ID<<endl<<"Price: "<<base.name<<endl<<"Name: "<<base.price<<endl;
	}
	return out;
}

istream& operator >>(istream& in, Base& base){
	if(base.verbose == true){
		cout << "Type in an ID: " << endl;
	}
	in >> base.ID;
	if(base.verbose == true){
		cout << "Type in a name: " << endl;
	}
	in >> base.name;
	if(base.verbose == true){
		cout << "Type in a base price: " << endl;
	}
	in >> base.price;

	return in;
}
