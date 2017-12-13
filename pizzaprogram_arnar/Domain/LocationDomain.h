#ifndef LOCATIONDOMAIN_H
#define LOCATIONDOMAIN_H
#include "../Repo/LocationRepository.h"

class LocationDomain{
	private:
		LocationRepository repo;
	public:
		LocationDomain();
		void addLocation(Location& location);
		vector<Location> getLocation();
};

#endif
