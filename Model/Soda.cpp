#include "soda.h"

Soda::soda(){
	//constructor
}

string Soda::getID(){
	return ID;
}

string Soda::getName(){
	return name;
}

double Soda::getPrice(){
	return price;
}

ostream& operator << (ostream& out, const Soda& soda){
	out<<soda.ID<<", "<<soda.name<<", "<<soda.price<<endl;
	return out;
}

istream& operator >> (istream& in, Soda& soda){
	cout<<"ID: ";
	in>>soda.ID;
	cout<<"Name: ";
	in>>soda.name;
	cout<<"Price: ";
	in>>soda.price;
	return in;
}

