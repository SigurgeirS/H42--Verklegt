#include "LocationDomain.h"

LocationDomain::LocationDomain(){
	//Constructor
}

void LocationDomain::addLocation(Location& location){
	location.verbose = false;
	repo.storeLocation(location);
}

vector<Location> LocationDomain::getLocation(){
	int c = 0;
	vector<Location> locations;
	locations = repo.fetchLocation();
	while(c < locations.size()){
		locations[c].verbose = true;
		c++;
	}
	return locations;
}
