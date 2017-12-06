#ifndef BASE_H
#define BASE_H
#include<iostream>
#include<string>

using namespace std;
class Base
{
    public:
        Base();
        friend ostream& operator << (ostream& out, Base base);
        friend istream& operator >>(istream& in, Base& base);
        string get_id();
        virtual ~Base();

    protected:

    private:
        string ID;
        double price;
        string base_name;
};

#endif // BASE_H
