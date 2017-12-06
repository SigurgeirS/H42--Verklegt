#ifndef TOPPING_H
#define TOPPING_H
#include<iostream>
#include<string>

using namespace std;

class Topping
{
public:
    Topping();
    friend ostream& operator << (ostream& out, const Topping topping);
    friend istream& operator >>(istream& in, Topping& topping);
    string get_id();
    virtual ~Topping();

private:
    string name;
    double price;
    string ID;
};

#endif // TOPPING_H
