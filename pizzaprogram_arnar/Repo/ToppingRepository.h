#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include<vector>
#include<fstream>
#include "../Model/Topping.h"

class ToppingRepository{
	private:
	public:
		toppingRepository();
		void storeTopping(const Topping& topping);
		vector<Topping> fetchTopping();
};

#endif
