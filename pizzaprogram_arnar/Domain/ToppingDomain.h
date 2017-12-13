#ifndef TOPPINGDOMAIN_H
#define TOPPINGDOMAIN_H

#include "../Repo/ToppingRepository.h"

class ToppingDomain {
	private:
		ToppingRepository repo;
	public:
		toppingDomain();
		void addTopping(Topping& topping);
		vector<Topping> getTopping();
};

#endif
