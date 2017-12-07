#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "../Model/pizza.h"

class PizzaRepository
{
public:
    PizzaRepository();
    void storePizza(const Pizza& pizza);
    Pizza retrievePizza();
    virtual ~PizzaRepository();

private:
};

#endif // PIZZAREPOSITORY_H
