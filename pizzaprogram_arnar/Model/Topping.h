<<<<<<< HEAD
#ifndef TOPPING_H
#define TOPPING_H
#include<iostream>
using namespace std;

class Topping
{
public:
    Topping();
    Topping(char* name, double price);
    friend ostream& operator << (ostream& out, const Topping topping);
    friend istream& operator >>(istream& in, Topping& topping);
    virtual ~Topping();

private:
    char name[32];
    double price;

};

#endif // TOPPING_H
=======
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
>>>>>>> a8bf7059d9df22810c8fa6bd54be9ab501350072
