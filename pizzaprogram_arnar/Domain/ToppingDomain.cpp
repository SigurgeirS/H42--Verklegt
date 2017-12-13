#include "ToppingDomain.h"

ToppingDomain::toppingDomain(){
	//constructor
}

void ToppingDomain::addTopping(Topping& topping){
	topping.verbose = false;
	repo.storeTopping(topping);
}

vector<Topping> ToppingDomain::getTopping(){
	int c = 0;
	vector<Topping> toppings;
	toppings = repo.fetchTopping();
	while(c < toppings.size()){
		toppings[c].verbose=true;
		c++;
	}
	return toppings;
}

int main(){
	vector<Topping> toppings;
	Topping topping;
	ToppingDomain dom;

	cin>>topping;
	dom.addTopping(topping);
	toppings = dom.getTopping();
	cout<<toppings[0]<<endl;
	return 0;
}
