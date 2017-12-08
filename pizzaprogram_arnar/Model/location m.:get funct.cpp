#include "location.hpp"

location::location(){
	//constructor
};

location::location(int id, int n, int addr){
	ID = id;
	name = n;
	address = addr;
};

istream & operator >> (istream& in, location& loc){
	in>>loc.ID;
	in>>loc.name;
	in>>loc.address;
	return in;
};

ostream& operator << (ostream& out, location& loc){
	out<<loc.ID<<", "<<loc.name<<", "<<loc.address<<endl;
	return out;
};

int main(){
	location loc;
	cin>>loc;
	cout<<loc;
	return 0;
}

location::get_location(){
	return ID;
}
