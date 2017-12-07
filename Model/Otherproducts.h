#ifndef OTHERPRODUCTS_H
#define OTHERPRODUCTS_H
#include<iostream>
using namespace std;

class Otherproducts
{
public:
    Otherproducts();
    friend istream& operator >> (istream& in, Otherproducts& otherproducts);
    friend ostream& operator << (ostream& out, const Otherproducts& otherproducts);
    virtual ~Otherproducts();

protected:

private:
    string ID;
    string product_name;
};

#endif // OTHERPRODUCTS_H
