#include "sides.h"

Sides::Sides(){
	//constructor
}

string Sides::getID(){
	return ID;
}

string Sides::getName(){
	return name;
}

double Sides::getPrice(){
	return price;
}

ostream& operator << (ostream& out, const Sides& side){
	out<<side.ID<<", "<<side.name<<", "<<side.price<<endl;

	return out;
}

istream& operator >> (istream& in, Sides& side){
	cout<<"ID: ";
	in>>side.ID;
	cout<<"Name: ";
	in>>side.name;
	cout<<"Price: ";
	in>>side.price;

	return in;
}
