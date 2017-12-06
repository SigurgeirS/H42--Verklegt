#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include "../Model/Pizza.h"
#include<iostream>
#include<fstream>
class OrderRepository
{
public:
    OrderRepository();
    void retrieveOrder();
    string retrieveItem(string filename, int id);
    void storePizza(const Pizza& pizza);
    virtual ~OrderRepository();

protected:

private:
};

#endif // ORDERREPOSITORY_H
