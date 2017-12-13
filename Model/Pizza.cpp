#include "Pizza.h"
#include <stddef.h>
#include<sstream>
/*Holds information about our pizza*/
Pizza::Pizza()
{
    toppingcount = 0;
    toppings = 0;
    currenttopping_Num = 0;
}
Pizza::Pizza(int numberOfToppings)
{
    initalize(numberOfToppings);
}

void Pizza::initalize(int numberOfToppings)
{
    clean();
    toppingcount = numberOfToppings;
    toppings = new Topping[toppingcount];
    currenttopping_Num = 0;
}

void Pizza::addTopping(Topping topping)
{
    toppings[currenttopping_Num] = topping;
    if(currenttopping_Num < toppingcount)
    {
        toppings[currenttopping_Num] = topping;
        currenttopping_Num++;
    }
}

//Returns a line after an ID (Expecting a line starting with an ID, no spaces and ID is a number)
bool Pizza::find_line(string line,int id_input){
    //A small part of this code was taken from:
    //http://www.cplusplus.com/articles/D9j2Nwbp/

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
}

ostream& operator << (ostream& out, const Pizza& pizza)
{
    out << pizza.toppingcount << " ";
    for(int i = 0; i < pizza.toppingcount; i++){
        out << pizza.toppings[i] << " ";
    }

    return out;
}

istream& operator >>(istream& in, Pizza& pizza)
{
    int toppingcount;
    in >> toppingcount;

    pizza.initalize(toppingcount);

    Topping topping;
    for(int i = 0; i < pizza.toppingcount; i++)
    {
        in >> topping;
        pizza.addTopping(topping);
    }
    return in;
}

void Pizza::clean()
{
    if(toppings != NULL)
    {
       delete[] toppings;
    }
    toppingcount = 0;
    toppings = NULL;
    currenttopping_Num = 0;
}

Pizza::~Pizza()
{
    clean();
}
