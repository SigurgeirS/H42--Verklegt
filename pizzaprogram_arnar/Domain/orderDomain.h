#ifndef ORDERDOMAIN_H
#define ORDERDOMAIN_H

#include"../Model/order.h"
#include"../Repo/OrderRepository.h"
#include <iostream>

class orderDomain{
	private:
		OrderRepository orderRepo;

	public:
		orderDomain();
		void addOrder(const order& newOrder);
		void getOrderList(const vector<order>& orderlist);


};

#endif
