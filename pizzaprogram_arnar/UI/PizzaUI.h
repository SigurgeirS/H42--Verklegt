#ifndef PIZZAUI_H
#define PIZZAUI_H
#include "../Model/Base.h"
#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
#include "../Model/Pizza_size.h"
#include "../Repo/OrderRepository.h"
#include "../Repo/Find_line.h"

class PizzaUI
{
public:
    PizzaUI();
    void startUI();
    Pizza get_pizza();
    PizzaRepository get_pizzarepo();
    Find_line get_find_line();
    void record_toppings();
    void record_base();
    void record_sizes();
    virtual ~PizzaUI();

private:

};

#endif // PIZZAUI_H
