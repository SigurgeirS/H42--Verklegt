#include "incID.h"

incID::incID(){
	//constructor
}

void incID::resetOrderID(){

	ofstream fout;
	string zero = "0";

	fout.open("orderID.txt");

	if(fout.is_open()){

		fout<<zero;
		fout.close();

	}else{

		cout<<"Could not open file"<<endl<<endl;

	};
}

void incID::orderID(order& newOrder){

	ofstream fout;
	ifstream fin;
	string newID;

	fin.open("orderID.txt");

	if(fin.is_open()){

	fin >> newID;
	fin.close();
	
	}else{
		cout<<"Could not open file"<<endl<<endl;
	}

	int inewID;
	//converts inewID to integer
	if(!(istringstream(newID) >> inewID)){

		inewID = 0;

	};
	//increments inewID by one
	inewID++;
	//converts inewID back to string
	ostringstream convert;
	convert << inewID;

	string ID = convert.str();
	//sets order.ID = inewID
	newOrder.setID(ID);
	
	fout.open("orderID.txt");
	//records the new ID for later use
	if(fout.is_open()){

		fout<<ID;
		fout.close();

	}else{

		cout<<"Could not open file"<<endl<<endl;

	}
}
