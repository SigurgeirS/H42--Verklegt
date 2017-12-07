#include "PizzaUI.h"
#include<iostream>
#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
using namespace std;
PizzaUI::PizzaUI()
{
    //ctor
}
void PizzaUI::startUI()
{

    char selection = '\0';

    while(selection != 'q')
    {
        cout << "m: Make pizza" << endl;
        cout << "r: read pizza" << endl;
        cout << "p: Mark pizza as paid" << endl;
        cin >> selection;
        switch(selection)
        {
        case 'm':
        {
            int topCnt;
            cout << "How many toppings: ";
            cin >> topCnt;
            Pizza pizza(topCnt);
            for(int i = 0; i < topCnt; i++)
            {
                Topping topping;
                cin >> topping;
                pizza.addTopping(topping);
            }
            PizzaRepository repo;
            repo.storePizza(pizza);
        }
        break;

        case 'r':
        {
            PizzaRepository repo;
            Pizza pizza = repo.retrievePizza();
            cout << pizza;
            cout << endl;
        }
        break;
        }
    }
}
PizzaUI::~PizzaUI()
{
}
