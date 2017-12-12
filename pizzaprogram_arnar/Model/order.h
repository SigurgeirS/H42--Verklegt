#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>

using namespace std;

class order{
	private:
		string ID;
		string name;
		string delivery;
		string status;
		double price;
		
	public:
		bool verbose;
		order();
		string getID();
		string getName();
		string getDelivery();
		string getStatus();
		double getPrice();
		void setID(string ID);
		
		friend istream& operator >> (istream& in, order& order);
		friend ostream& operator << (ostream& out, const order& order);
};


#endif
