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


	if(order.verbose){
		cout<<"ID: ";
	}
	in>>order.ID;	
	in.ignore();
	if(order.verbose){
		cout<<"Name: ";
	}
	getline(in, order.name);
	if(order.verbose){
		cout<<"Delivery method: ";
	}
	in>>order.delivery;
	if(order.verbose){
		cout<<"Order Status: ";
	}
	in>>order.status;
	if(order.verbose){
		cout<<"Total cost of order: ";
	}
	in>>order.price;
	if(order.verbose){
	}
	return in;
};

ostream& operator << (ostream& out, const order& order){
	out<<order.ID<<endl<<order.name<<endl<<order.delivery<<endl<<order.status<<endl<<order.price<<endl;
	return out;
};

