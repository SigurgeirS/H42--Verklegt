#ifndef PIZZADOMAIN_H
#define PIZZADOMAIN_H

#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
#include <vector>

class PizzaDomain {
	private:
		PizzaRepository repo;

	public:
		void addPizza(Pizza& pizza);
		vector<Pizza> getPizza();

};

#endif
