#include "../Repo/PizzaRepository.h"
#include<vector>
#include<sstream>
#include<string>

Admin_domain::Admin_domain()
{
  initialize();
}

Admin_domain::~Admin_domain()
{
    //dtor
}
void Admin_domain::initialize(){
    PizzaRepository pizzarepo;
}
//Returns a line after an ID (Expecting a line starting with an ID, no spaces and ID is a number)
/*bool Find_line::find_ID(string line,int id_input){
     ostringstream convert;//Stream used for the conversion.
     convert << id_input;
     string id_input_string = convert.str();
     string id = "";
    for(unsigned int i = 0; i < line.length(); i++){
            if(line[i] == ' '){
                break;
            }
        id += line[i];
    }
    if(id_input_string == id){
        return true;
    }
    return false;
}*/

string Admin_domain::find_ID(string line){
    string ID = "";
    for(unsigned int i = 0; i < line.length(); i++){
        if(line[i] == ' '){
            return ID;
        }
        ID += line[i];
    }
    return 0;
}
/*Record toppings to a file*/
void Admin_domain::record_toppings(Topping& topping)
{
   pizzarepo.storeToppings(topping);
}

void Admin_domain::record_base(Base& base){
    pizzarepo().storeBase(base);
}

void Admin_domain::record_size(Pizza_size& pizza_size){
     pizzarepo().storeSize(pizza_size);
}

vector<string> Admin_domain::read_all_toppings(){
     Find_line findline;
     return findline.retrive_all_items("pizza_topping.txt");
}

/*string* Admin_domain::read_toppings(Topping& topping, int topCnt){
     Find_line findline;
     findline.retrieveItem()
    string* toppings = new string[topCnt];

    return toppings;
}*/

