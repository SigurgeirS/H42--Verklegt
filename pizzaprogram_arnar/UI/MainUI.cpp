<<<<<<< HEAD
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
=======
#include "MainUI.h"

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
        system("CLS");
        cout << "a: Admin" << endl;
        cout << "s: Sales" << endl;
        cout << "b: Baking" << endl;
        cout << "d: Delivery" << endl;
        cin >> selection;
        switch(selection)
        {
        case 'a':
        {
            PizzaUI pizzaui;
            pizzaui.startUI();
            cout << endl;
        }
        break;

        case 's':
        {
            /*SalesUI salesui;
            salesui.startUI();*/
            cout << endl;
        }
        break;
        case 'b':
        {
            /*BakingUI bakingui;
            bakingui.startUI();*/
            cout << endl;
        }
        break;
        case 'd':
        {
            /*DeliveryUI deliveryui;
            deliveryui.startUI();*/
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
>>>>>>> a8bf7059d9df22810c8fa6bd54be9ab501350072
