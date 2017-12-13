#ifndef ADMIN_DOMAIN_H
#define ADMIN_DOMAIN_H
#include "../Repo/PizzaRepository.h"
#include "../Repo/Pizza_menuRepository.h"
#include "../Repo/OtherproductsRepository.h"
#include "../Model/Pizza_menu.h"
#include "../Model/Location.h"
#include "../Repo/LocationRepository.h"
///Include for toppings
#include "../Exceptions/invalid_topping/InvalidToppingCount.h"
#include "../Exceptions/invalid_topping/InvalidToppingName.h"
#include "../Exceptions/invalid_topping/InvalidToppingPrice.h"
///Include for base
#include "../Exceptions/Invalid_base/InvalidBaseName.h"
#include "../Exceptions/Invalid_base/InvalidBasePrice.h"
#include "../Exceptions/Invalid_base/InvalidBaseCount.h"
///Include for size
#include "../Exceptions/invalid_size/InvalidSize.h"
#include "../Exceptions/invalid_size/Invalidsizeprice.h"
#include "../Exceptions/invalid_size/InvalidSizeCount.h"
///Include for location
#include "../Exceptions/Invalid_location/InvalidLocationName.h"
#include "../Exceptions/Invalid_location/InvalidLocationCount.h"
///Include for menu
#include "../Exceptions/Invalid_menu/InvalidPizzaMenuName.h"
#include "../Exceptions/Invalid_menu/InvalidMenuCount.h"
///Other includes
#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iomanip>


class Admin_domain
{
public:
    Admin_domain();
    ///Recording things
    void record_toppings(Topping& topping);
    void record_base(Base& base);
    void record_size(Pizza_size& pizzasize);
    void record_menu(Pizza_menu& pizzamenu,string line);
    void record_location(Location& location);
    ///Checking toppings
    void check_topping_count(int counter) throw (InvalidToppingCount);
    void check_topping_ID(Topping& topping);
    void check_topping_Name(Topping& topping);
    void check_topping_Price(Topping& topping);
    ///Checking base
    void check_base_name(Base& base);
    void check_base_price(Base& base);
    void check_base_count(int counter);
    ///Checking size
    void check_pizza_size(Pizza_size& pizzasize);
    void check_pizza_size_price(Pizza_size& pizzasize);
    void check_size_count(int counter) throw(InvalidSizeCount);
    ///Checking location
    void check_location_name(Location& location);
    void check_location_count(int counter);
    ///Checking menu
    void check_menu_name(Pizza_menu& pizzamenu);
    void check_menu_count(int counter);
    ///Other things
    string find_ID(string line);
    string retrieveItem(string filename, string id);
    vector<string> read_all_toppings();
    void invalid_input();
    string get_column(string line, int column);
    void clear_input_stream();
    virtual ~Admin_domain();

private:
};

#endif // ADMIN_DOMAIN_H
