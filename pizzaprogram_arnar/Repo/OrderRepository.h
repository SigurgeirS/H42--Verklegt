#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include"../Model/order.h"
#include<fstream>
class OrderRepository
{
public:
	OrderRepository();
	void add(const order& newOrder);
private:
};

#endif // ORDERREPOSITORY_H
