<<<<<<< HEAD
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
=======
#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "../Model/Base.h"
#include "../Model/Pizza_size.h"
#include "../Model/Topping.h"
#include "../Repo/Find_line.h"

class PizzaRepository
{
public:

    PizzaRepository();
    void storeToppings(const Topping& topping);
    void storeBase(const Base& base);
    void storeSize(const Pizza_size& pizza_size);
//    Find_line get_find_line();
    string read_toppings(int ID);
    virtual ~PizzaRepository();

private:
};

#endif // PIZZAREPOSITORY_H
>>>>>>> a8bf7059d9df22810c8fa6bd54be9ab501350072
