#include "orderDomain.h"

orderDomain::orderDomain(){
	//constructor
}

void orderDomain::addOrder(const order& newOrder){
	orderRepo.add(newOrder);
};

void orderDomain::getOrderList(const vector<order>& orderlist){
	//prints out all orders.
	cout<<"--------------------"<<endl;
	int c = 0;
	order ord;
	while( c < orderlist.size() ){
		cout<<"--------------------"<<endl;
		cout<<orderlist[c];
		cout<<"--------------------"<<endl;
		c++;
	}
	cout<<"--------------------"<<endl;
}

