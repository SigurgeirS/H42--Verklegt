#ifndef PIZZASIZEREPO_H
#define PIZZASIZEREPO_H
#include "../Model/Pizza_size.h"
#include <vector>
#include <fstream>

class Pizza_sizeRepository{
	private:
	public:
		Pizza_sizeRepository();
		void storeSize(const Pizza_size& size);
		vector<Pizza_size> fetchSize();
};

#endif
