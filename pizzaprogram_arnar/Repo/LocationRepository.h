#ifndef LOCATIONREPOSITORY_H
#define LOCATIONREPOSITORY_H
#include "../Model/Location.h"
#include <fstream>

class LocationRepository
{
public:
    LocationRepository();
    void storelocation(const Location& location);
    virtual ~LocationRepository();

protected:

private:
};

#endif // LOCATIONREPOSITORY_H
