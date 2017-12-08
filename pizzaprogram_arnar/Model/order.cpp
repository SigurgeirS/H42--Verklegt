#include "order.h"

order::order(){
	//constructor
};

string order::getID(){
	return ID;
};

string order::getName(){
	return name;
};

string order::getStatus(){
	return status;
};

double order::getPrice(){
	return price;
};

void order::setID(string ID){
	this -> ID = ID;
};


istream& operator >> (istream& in, order& order){
	cout<<"Name: ";
	in>>order.name;
	cout<<"Delivery method: ";
	in>>order.delivery;
	cout<<"Status: ";
	in>>order.status;
	return in;
};

ostream& operator << (ostream& out, const order& order){
	out<<order.ID<<", "<<order.name<<", "<<order.delivery<<", "<<order.status<<", "<<order.price<<endl;
	return out;
};

