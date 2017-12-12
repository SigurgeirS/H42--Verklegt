#ifndef PIZZAUI_H
#define PIZZAUI_H
#include "MainUI.h"
#include "../Model/Base.h"
#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
#include "../Model/Pizza_size.h"
#include "../Repo/Find_line.h"
#include "../Model/Pizza_menu.h"
#include "../UI/ToppingsUI.h"
#include "../Domain/Admin_domain.h"
#include "../Model/Pizza_menu.h"
#include<iostream>

class PizzaUI
{
public:
    PizzaUI();
    void startUI();
    Pizza get_pizza();
    PizzaRepository get_pizzarepo();
    Find_line get_find_line();
    Admin_domain get_admin_domain();
    void record_toppings();
    void record_base();
    void record_sizes();
    void record_menu();
    void record_locations();
    void record_other_products();
    void goback();
    void display(int counter, string* line_array);
    void read_format_three(vector<string> lines);
    virtual ~PizzaUI();

private:

};

#endif // PIZZAUI_H
