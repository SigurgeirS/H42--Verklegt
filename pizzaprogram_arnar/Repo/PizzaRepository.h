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
