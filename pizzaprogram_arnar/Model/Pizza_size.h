#ifndef PIZZA_SIZE_H
#define PIZZA_SIZE_H
#include <iostream>
#include<string>

using namespace std;

class Pizza_size
{
    public:
        Pizza_size();
	string getID();
        friend istream& operator >> (istream& in, Pizza_size& pizza_size);
        friend ostream& operator << (ostream& out,const Pizza_size& pizza_size);
	bool verbose;
    private:
        string ID;
        double price;
        string name;
};

#endif // PIZZA_SIZE_H
