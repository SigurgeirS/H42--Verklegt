#include "LocationRepository.h"

LocationRepository::LocationRepository()
{
    //ctor
}

LocationRepository::~LocationRepository()
{
    //dtor
}

void LocationRepository::storelocation(const Location& location)
{
    ofstream fout;
    fout.open("Pizza_locations.txt");
    fout << location;
    fout.close();
}
