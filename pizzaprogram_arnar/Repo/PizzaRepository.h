#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "../Model/Pizza.h"
#include <fstream>
#include <vector>

class PizzaRepository
{
public:
    PizzaRepository();
    void storePizza(const Pizza& pizza);
    vector<Pizza> fetchPizzas();

private:
};

#endif // PIZZAREPOSITORY_H
