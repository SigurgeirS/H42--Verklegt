#include "LocationRepository.h"

LocationRepository::locationRepository(){
	//constructor
}

void LocationRepository::storeLocation(const Location& location){

	ofstream fout;
	fout.open("locationlist.txt", ios::app);
	if(fout.is_open()){

		fout << location;

		fout.close();
	}else{
		//throw exception
	}
}

vector<Location> LocationRepository::fetchLocation(){

	vector<Location> locations;
	ifstream fin;

	fin.open("locationlist.txt");

	if(fin.is_open()){
		Location location;
		location.verbose = false;
		while(fin.good()){
			fin>>location;
			locations.push_back(location);
		}
		locations.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return locations;
}

