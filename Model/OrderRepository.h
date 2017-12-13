#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include"../Model/order.h"
#include<fstream>
#include <vector>
using namespace std;
class OrderRepository
{
public:
	OrderRepository();
	void add(const order& newOrder);
	vector<order> fetch();
private:
};

#endif // ORDERREPOSITORY_H
