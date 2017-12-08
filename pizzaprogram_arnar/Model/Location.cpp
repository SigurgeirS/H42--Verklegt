///This class is the location data
#include "Location.h"
using namespace std;
Location::Location()
{
    this->ID = "";
    this->name = "";
}

Location::~Location()
{
    //dtor
}

string Location::get_id()
{
    return ID;
}

string Location::get_name()
{
    return name;
}

istream& operator >> (istream& in, Location& location)
{
    cout << "Type in a location ID: " << endl;
    in >> location.ID;
    cout << "Type in a location name: " << endl;
    in >> location.name;
    return in;
}

ostream& operator << (ostream& out, const Location& location)
{
    out << location.ID << "," << location.name << "," << endl;
    return out;
}
