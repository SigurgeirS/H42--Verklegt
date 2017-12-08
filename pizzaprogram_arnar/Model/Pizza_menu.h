#ifndef PIZZA_MENU_H
#define PIZZA_MENU_H
#include<iostream>

using namespace std;

class Pizza_menu
{
public:
    Pizza_menu();
    friend istream& operator >> (istream& in, Pizza_menu& pizza_menu);
    friend ostream& operator << (ostream& out,const Pizza_menu& pizza_menu);
    string get_id();
    void startUI();
    virtual ~Pizza_menu();

protected:

private:
    string ID;
    string name;
};

#endif // PIZZA_MENU_H
