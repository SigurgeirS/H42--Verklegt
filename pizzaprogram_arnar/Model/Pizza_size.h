#ifndef PIZZA_SIZE_H
#define PIZZA_SIZE_H
#include <iostream>
using namespace std;

class Pizza_size
{
    public:
        Pizza_size();
        friend istream& operator >> (istream& in, Pizza_size& pizza_size);
        friend ostream& operator << (ostream& out,const Pizza_size& pizza_size);
        virtual ~Pizza_size();

    protected:

    private:
        int ID;
        double price;
        string name;
};

#endif // PIZZA_SIZE_H
