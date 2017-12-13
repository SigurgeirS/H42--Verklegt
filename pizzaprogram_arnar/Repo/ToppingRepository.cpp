#include "ToppingRepository.h"

ToppingRepository::toppingRepository(){
	//constructor
}

void ToppingRepository::storeTopping(const Topping& topping){
	
	ofstream fout;
	fout.open("toppinglist.txt", ios::app);
	if(fout.is_open()){

		fout << topping;
		fout.close();
	}else{
		//throw exception
	}
}

vector<Topping> ToppingRepository::fetchTopping(){

	vector<Topping> toppings;
	ifstream fin;

	fin.open("toppinglist.txt");

	if(fin.is_open()){
		Topping topping;
		topping.verbose = false;
		while(fin.good()){
			fin>>topping;
			toppings.push_back(topping);
		}
		fin.close();
		toppings.pop_back();
	}else{
		//throw exception
	}
	return toppings;
}
