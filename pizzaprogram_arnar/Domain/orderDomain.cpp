#include "orderDomain.h"

orderDomain::orderDomain(){
	//constructor
}

void orderDomain::addOrder(const order& newOrder){
	orderRepo.add(newOrder);
	cout<<newOrder<<endl;
};
