#include "../Domain/Admin_domain.h"
#include "../UI/PizzaUI.h"
using namespace std;
Admin_domain::Admin_domain()
{

}
///Gets a cilumn from a line
string Admin_domain::get_column(string line, int column)
{
    stringstream stream;
    string found = "";
    stream << line;
    for(int i = 0; i < column; i++)
    {
        getline(stream,found,',');
    }
    return found;
}

///Topping check
void Admin_domain::check_topping_count(int counter) throw (InvalidToppingCount){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidToppingCount();
     }
}

/*void Admin_domain::check_topping_ID(Topping& topping){
     string ToppingID = topping.get_id();
     for(unsigned int i = 0; i < ToppingID.length(); i++){
         if(!isdigit(ToppingID[i])){
            clear_input_stream();
        throw InvalidToppingID();
     }
     }
}*/

void Admin_domain::check_topping_Name(Topping& topping){
     string ToppingName = topping.get_name();
     for(unsigned int i = 0; i < ToppingName.length(); i++){
          if(isdigit(ToppingName[i])){
             clear_input_stream();
          throw InvalidToppingName();
     }
     }
}

void Admin_domain::check_topping_Price(Topping& topping){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidToppingPrice();
     }
}

///Base check
void Admin_domain::check_base_count(int counter){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidBaseCount();
     }
}

void Admin_domain::check_base_name(Base& base){
    for(unsigned int i = 0; i < base.get_name().length(); i++){
     if(isdigit(base.get_name()[i])){
        throw InvalidBaseName();
     }
    }
}

void Admin_domain::check_base_price(Base& base){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidBasePrice();
     }
}

///Size check
void Admin_domain::check_size_count(int counter) throw (InvalidSizeCount){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidSizeCount();
     }
}

void Admin_domain::check_pizza_size_price(Pizza_size& pizzasize){
      if(cin.fail()){
        clear_input_stream();
        throw Invalidsizeprice();
     }
}

void Admin_domain::check_pizza_size(Pizza_size& pizzasize){

     if(!isdigit(pizzasize.get_size())){
        clear_input_stream();
        throw InvalidSize();
     }
}

///Location check
void Admin_domain::check_location_count(int counter){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidLocationCount();
     }
}
void Admin_domain::check_location_name(Location& location){

    for(unsigned int i = 0; i < location.get_name().length(); i++){
          if(isdigit(location.get_name()[i])){
             clear_input_stream();
          throw InvalidLocationName();
     }
}
}
///MenuCheck
void Admin_domain::check_menu_count(int counter){
     if(cin.fail()){
        clear_input_stream();
        throw InvalidMenuCount();
     }
}

void Admin_domain::check_menu_name(Pizza_menu& pizzamenu){
         for(unsigned int i = 0; i < pizzamenu.get_name().length(); i++){
          if(isdigit(pizzamenu.get_name()[i])){
             clear_input_stream();
          throw InvalidPizzaMenuName();
     }
}
}

///Takes a line and finds the id
string Admin_domain::find_ID(string line)
{
    char splitchar = ',';
    stringstream stream(line);
    string ID = "";
    getline(stream,ID,splitchar);
    return ID;
}

/*Record toppings to a file*/
void Admin_domain::record_toppings(Topping& topping)
{
    PizzaRepository pizzarepo;
    this->check_topping_Price(topping);
    this->check_topping_Name(topping);
    pizzarepo.storeToppings(topping);
}

void Admin_domain::record_base(Base& base)
{
    PizzaRepository pizzarepo;
    this->check_base_name(base);
    this->check_base_price(base);
    pizzarepo.storeBase(base);
}

void Admin_domain::record_menu(Pizza_menu& pizzamenu,string line)
{
    Pizza_menuRepository menu_repo;
    string ID = this->find_ID(line);
    this->check_menu_name(pizzamenu);
    menu_repo.storemenu(ID,pizzamenu);
}

void Admin_domain::record_size(Pizza_size& pizza_size)
{
    PizzaRepository pizzarepo;
    this->check_pizza_size_price(pizza_size);
    this->check_pizza_size(pizza_size);
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
    this->check_location_name(location);
    locationrepo.storelocation(location);
}

void Admin_domain::clear_input_stream(){
        cin.clear();
        cin.ignore();
}

Admin_domain::~Admin_domain()
{
    //dtor
}
