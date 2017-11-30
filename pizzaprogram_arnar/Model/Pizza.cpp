#include "Pizza.h"
#include <stddef.h>
/*Holds information about our pizza*/
Pizza::Pizza()
{
    toppingcount = 0;
    toppings = 0;
    currenttopping_Num = 0;
}
Pizza::Pizza(int numberOfToppings)
{
    initalize(numberOfToppings);
}
Pizza::~Pizza()
{
    clean();
}

void Pizza::initalize(int numberOfToppings)
{
    clean();
    toppingcount = numberOfToppings;
    toppings = new Topping[toppingcount];
    currenttopping_Num = 0;
}

void Pizza::addTopping(Topping topping)
{
    toppings[currenttopping_Num] = topping;
    if(currenttopping_Num < toppingcount)
    {
        toppings[currenttopping_Num] = topping;
        currenttopping_Num++;
    }
}

ostream& operator << (ostream& out, const Pizza& pizza)
{

    out << pizza.toppingcount << " ";
    for(int i = 0; i < pizza.toppingcount; i++)
    {
        out << pizza.toppings[i] << " ";
    }
    return out;
}

istream& operator >>(istream& in, Pizza& pizza)
{
    int toppingcount;
    in >> toppingcount;

    pizza.initalize(toppingcount);

    Topping topping;
    for(int i = 0; i < pizza.toppingcount; i++)
    {
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;
}

void Pizza::clean()
{
    if(toppings != 0)
    {
        delete[] toppings;
    }
    toppingcount = 0;
    toppings = NULL;
    currenttopping_Num = 0;
}
