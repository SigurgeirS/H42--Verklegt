
#ifndef INCID_H
#define INCID_H

#include<sstream>
#include<fstream>

#include"../Model/order.h"

class incID{
	private:

	public:
		incID();
		//sets id records to zero
		void resetOrderID();
		//Sets ID to latest ID + one
		void orderID(order& newOrder);
	

};

#endif
