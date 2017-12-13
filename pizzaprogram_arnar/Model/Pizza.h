#ifndef PIZZA_H
#define PIZZA_H

#include "topping.h"
#include <iostream>
using namespace std;
class Pizza
{
	private:
		string ID;
		double price;
	public:
		Pizza();
		string getID();
    		friend ostream& operator << (ostream& out, const Pizza& pizza);
    		friend istream& operator >> (istream& in, Pizza& pizza);
		bool verbose;
    
};

#endif // PIZZA_H
