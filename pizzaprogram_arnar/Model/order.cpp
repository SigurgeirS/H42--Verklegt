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


istream& operator >> (istream& in, order& order){
	cout<<"ID: ";
	in>>order.ID;
	cout<<"Name: ";
	in>>order.name;
	cout<<"Delivery method: ";
	in>>order.delivery;
	cout<<"Status: ";
	in>>order.status;
	cout<<"Price: ";
	in>>order.price;
	return in;
};

ostream& operator << (ostream& out, order& order){
	out<<order.ID<<", "<<order.name<<", "<<order.delivery<<", "<<order.status<<", "<<order.price<<endl;
	return out;
};

int main(){
	order ord;
	cin>>ord;
	cout<<ord;
	return 0;
}
