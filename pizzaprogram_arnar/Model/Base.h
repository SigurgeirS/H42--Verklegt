#ifndef BASE_H
#define BASE_H
#include<iostream>
#include<string>

using namespace std;
class Base
{
    public:
        Base();
        friend ostream& operator << (ostream& out, const Base& base);
        friend istream& operator >>(istream& in, Base& base);
        string get_id();
	bool verbose;

    protected:

    private:
        string ID;
        double price;
        string name;
};

#endif // BASE_H

