#include "../Domain/Admin_domain.h"

Admin_domain::Admin_domain()
{

}

//Takes a line and finds the id ( getline() will not work as it's first parameter is iostream )
string Admin_domain::find_ID(string line)
{
    string ID = "";
    for(unsigned int i = 0; i < line.length(); i++)
    {
        if(line[i] == ',')
        {
            return ID;
        }
        ID += line[i];
    }
    return 0;
}

/*Record toppings to a file*/
void Admin_domain::record_toppings(Topping& topping)
{
    PizzaRepository pizzarepo;
    pizzarepo.storeToppings(topping);
}

void Admin_domain::record_base(Base& base)
{
    PizzaRepository pizzarepo;
    pizzarepo.storeBase(base);
}

void Admin_domain::record_menu(Pizza_menu& pizzamenu,string line)
{
    Pizza_menuRepository menu_repo;
    string ID = this->find_ID(line);
    menu_repo.storemenu(ID,pizzamenu);
}

void Admin_domain::record_size(Pizza_size& pizza_size)
{
    PizzaRepository pizzarepo;
    pizzarepo.storeSize(pizza_size);
}

vector<string> Admin_domain::read_all_toppings()
{
    Find_line findline;
    return findline.retrive_all_items("pizza_topping.txt");
}

void Admin_domain::record_location(Location& location)
{
    LocationRepository locationrepo;
    locationrepo.storelocation(location);
}

void Admin_domain::record_other_products(Otherproducts& otherproducts)
{
    OtherproductsRepository otherproductsrepo;
    otherproductsrepo.storeproduct(otherproducts);
}
/*string* Admin_domain::read_toppings(Topping& topping, int topCnt){
     Find_line findline;
     findline.retrieveItem()
    string* toppings = new string[topCnt];

    return toppings;
}*/

Admin_domain::~Admin_domain()
{
    //dtor
}
