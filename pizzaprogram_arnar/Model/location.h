#ifndef LOCATION_H
#define LOCATION_H
#include <string>
#include <iostream>

using namespace std;

class location {
	private:
		string ID;
		string name;
		string address;
	public:
		location();
		string getID();

		friend istream& operator >> (istream& in, location& loc);
		friend ostream& operator << (ostream& out, location &loc);
};

#endif
