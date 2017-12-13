#ifndef LOCATIONREPOSITORY_H
#define LOCATIONREPOSITORY_H
#include "../Model/Location.h"
#include <fstream>
#include <vector>

class LocationRepository
{
public:
    locationRepository();
    void storeLocation(const Location& location);
    vector<Location> fetchLocation();
private:
};

#endif // LOCATIONREPOSITORY_H
