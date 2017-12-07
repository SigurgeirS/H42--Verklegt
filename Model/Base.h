#ifndef BASE_H
#define BASE_H
#include<iostream>
using namespace std;
class Base
{
public:
    Base();
    friend ostream& operator << (ostream& out, Base base);
    friend istream& operator >>(istream& in, Base& base);
    string get_id();
    string get_name();
    double get_price();
    virtual ~Base();

protected:

private:
    string ID;
    double price;
    string base_name;
};

#endif // BASE_H
