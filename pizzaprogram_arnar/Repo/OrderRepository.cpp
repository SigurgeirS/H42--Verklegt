#include "OrderRepository.h"

OrderRepository::OrderRepository(){
	//constructor
}

void OrderRepository::add(const order& newOrder){
	ofstream fout;
	fout.open("orderlist.txt", ios::app);

	if (fout.is_open()){
		fout << newOrder;
		fout.close();

	}else{
		//throw error
	}
}
