#ifndef TOPPING_H
#define TOPPING_H
#include<iostream>
using namespace std;

class Topping
{
public:
    Topping();
    friend ostream& operator << (ostream& out, const Topping topping);
    friend istream& operator >>(istream& in, Topping& topping);
    int get_id();
    virtual ~Topping();

private:
    char name[32];
    double price;
    int ID;
    string toppingline;
};

#endif // TOPPING_H
