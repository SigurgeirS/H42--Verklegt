#ifndef ADMIN_DOMAIN_H
#define ADMIN_DOMAIN_H
#include "../Repo/PizzaRepository.h"
#include "../Repo/Pizza_menuRepository.h"
#include "../Repo/OtherproductsRepository.h"
#include "../Model/Pizza_menu.h"
#include "../Model/Location.h"
#include "../Repo/LocationRepository.h"
#include "../Model/Otherproducts.h"
#include<vector>
#include<sstream>
#include<string>

class Admin_domain
{
public:
    Admin_domain();
    void initialize();
    void record_toppings(Topping& topping);
    void record_base(Base& base);
    void record_size(Pizza_size& pizzasize);
    void record_menu(Pizza_menu& pizzamenu,string line);
    void record_other_products(Otherproducts& otherproducts);
    string find_ID(string line);
    string retrieveItem(string filename, string id);
    void record_location(Location& location);
    vector<string> read_all_toppings();
    virtual ~Admin_domain();

private:
};

#endif // ADMIN_DOMAIN_H
