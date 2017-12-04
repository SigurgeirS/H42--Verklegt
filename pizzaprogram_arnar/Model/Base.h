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
        int get_id();
        virtual ~Base();

    protected:

    private:
        int ID;
        double price;
        string base_name;
};

#endif // BASE_H
