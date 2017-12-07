#include "Otherproducts.h"

using namespace std;
Otherproducts::Otherproducts()
{
    //ctor
}

Otherproducts::~Otherproducts()
{
    //dtor
}

istream& operator >> (istream& in, Otherproducts& otherproducts)
{
    cout << "Type in a poduct ID: " << endl;
    in >> otherproducts.ID;
    cout << "Type in a product name: " << endl;
    in >> otherproducts.product_name;
    return in;
}

ostream& operator << (ostream& out, const Otherproducts& otherproducts)
{
    out << otherproducts.ID << "," << otherproducts.product_name << endl;
    return out;
}
