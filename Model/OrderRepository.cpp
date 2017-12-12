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

vector<order> OrderRepository::fetch() {
	ifstream fin;
	vector<order> orders;

	fin.open("orderlist.txt");
	if(fin.is_open()){
		order forder;
		forder.verbose = false;

		while(fin.good()){
			fin>>forder;
			orders.push_back(forder);
		}
		fin.close();
		orders.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return orders;
}


