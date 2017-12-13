#include "PizzaDomain.h"

void PizzaDomain::addPizza(Pizza& pizza){
	pizza.verbose = false;
	repo.storePizza(pizza);
}

vector<Pizza> PizzaDomain::getPizza(){
	int c = 0;
	vector<Pizza> pizzas;
	pizzas = repo.fetchPizzas();
	while(c < pizzas.size()){
		pizzas[c].verbose = true;
		c++;
	}
	return pizzas;
}

