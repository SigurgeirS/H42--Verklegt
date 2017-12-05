#include "location.h"

location::location(){
	//constructor
};

string location::getID(){
	return ID;
}

istream & operator >> (istream& in, location& loc){
	cout<<"ID: ";
	in>>loc.ID;
	cout<<"Name: ";
	in>>loc.name;
	cout<<"Address: ";
	in>>loc.address;

	return in;
};

ostream& operator << (ostream& out, location& loc){
	out<<loc.ID<<" "<<loc.name<<" "<<loc.address<<endl;
	return out;
};
