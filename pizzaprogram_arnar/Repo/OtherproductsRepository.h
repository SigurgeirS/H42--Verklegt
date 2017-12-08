#ifndef OTHERPRODUCTSREPOSITORY_H
#define OTHERPRODUCTSREPOSITORY_H
#include "../Model/Otherproducts.h"

class OtherproductsRepository
{
public:
    OtherproductsRepository();
    void storeproduct(const Otherproducts& otherproducts);
    virtual ~OtherproductsRepository();

protected:

private:
};

#endif // OTHERPRODUCTSREPOSITORY_H
