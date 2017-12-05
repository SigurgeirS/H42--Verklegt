#ifndef ADMIN_DOMAIN_H
#define ADMIN_DOMAIN_H
#include "../Repo/PizzaRepository.h"

class Admin_domain
{
    public:
        Admin_domain();
        void initialize();
        void record_toppings(Topping& topping);
        void record_base(Base& base);
        void record_size(Pizza_size& pizzasize);
        void record_menu(int pizzaCnt);
        string find_ID(string line);
        string retrieveItem(string filename, string id);
        vector<string> read_all_toppings();
        PizzaRepository pizzarepo;
        virtual ~Admin_domain();

    protected:

    private:
};

#endif // ADMIN_DOMAIN_H
