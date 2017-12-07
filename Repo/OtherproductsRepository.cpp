#include "OtherproductsRepository.h"
#include "../Model/Otherproducts.h"
#include <fstream>
OtherproductsRepository::OtherproductsRepository()
{
    //ctor
}

OtherproductsRepository::~OtherproductsRepository()
{
    //dtor
}

void OtherproductsRepository::storeproduct(const Otherproducts& otherproducts)
{
    ofstream fout;
    fout.open("other_products.txt");
    fout << otherproducts;
    fout.close();
}
