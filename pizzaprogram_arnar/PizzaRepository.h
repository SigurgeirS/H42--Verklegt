#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "pizza.h"

class PizzaRepository
{
    public:
        PizzaRepository();
        void storePizza(const Pizza& pizza);
        Pizza retrievePizza();
        virtual ~PizzaRepository();

    protected:

    private:
};

#endif // PIZZAREPOSITORY_H
