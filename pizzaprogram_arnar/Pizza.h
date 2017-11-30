#ifndef PIZZA_H
#define PIZZA_H
#include "topping.h"
#include <iostream>
using namespace std;
class Pizza
{
    public:
        Pizza();
        Pizza(int numberOfTopings);

        friend ostream& operator << (ostream& out, const Pizza& pizza);
        virtual ~Pizza();
        void initalize(int numberOfTopings);
        void clean();
        void addTopping(Topping topping);
         friend istream& operator >>(istream& in, Pizza& pizza);
    protected:

    private:
        Topping *toppings;
        int toppingcount;
        int currenttopping_Num;
};

#endif // PIZZA_H
