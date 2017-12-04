#ifndef LOCATION_H
#define LOCATION_H
#include <string>
#include <iostream>

using namespace std;

class location {
	private:
		int ID;
		string name;
		string address;
	public:
		location();
		location(int id, int n, int addr);
		
		friend istream& operator >> (istream& in, location& loc);
		friend ostream& operator << (ostream& out, location &loc);
};

#endif