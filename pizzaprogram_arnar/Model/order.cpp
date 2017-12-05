#include "order.h"

order::order(){
	//constructor
};

order::order(string id, string n, string stat ,double pr){
	ID = id;
	name = n;
	status = stat;
	price = pr;

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


istream& operator >> (istream& in, order& order){
	cout<<"ID: ";
	in>>order.ID;
	cout<<"Name: ";
	in>>order.name;
	cout<<"Status: ";
	in>>order.status;
	cout<<"Price: ";
	in>>order.price;
	return in;
};

ostream& operator << (ostream& out, order& order){
	out<<order.ID<<" "<<order.name<<" "<<order.status<<" "<<order.price<<endl;
	return out;
};
