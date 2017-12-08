#ifndef SODA_H
#define SODA_H

#include<string>
#include<iostream>
using namespace std;

class Soda {
	private:
		string ID;
		string name;
		double price;
	public:
		soda();
		string getID();
		string getName();
		double getPrice();
		
		friend ostream& operator << (ostream& out, const Soda& soda);
		friend istream& operator >> (istream& in, Soda& soda);
};

#endif
