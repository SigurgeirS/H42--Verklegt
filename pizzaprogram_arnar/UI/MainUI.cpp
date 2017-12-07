#include "MainUI.h"
#include<iostream>
#include "pizzaUI.h"

using namespace std;
MainUI::MainUI()
{
    //ctor
}

void MainUI::startUI()
{
    char selection = '\0';

    while(selection != 'q')
    {
        cout << "p: pizzas" << endl;
        cin >> selection;
        switch(selection)
        {
        case 'p':
        {
            PizzaUI pizzaui;
            pizzaui.startUI();
            cout << endl;
        }
        break;
        }
    }
}

MainUI::~MainUI()
{
    //dtor
}
