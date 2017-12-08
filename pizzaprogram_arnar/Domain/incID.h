#ifndef INCID_H
#define INCID_H

#include<sstream>
#include<fstream>

#include"../Model/order.h"

class incID{
	private:

	public:
		incID();
		void resetOrderID();
		void orderID(order& newOrder);
	

};

#endif
