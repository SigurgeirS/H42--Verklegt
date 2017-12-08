#include "Pizza_menuRepository.h"
Pizza_menuRepository::Pizza_menuRepository()
{
    //ctor
}

Pizza_menuRepository::~Pizza_menuRepository()
{
    //dtor
}

/*Writes a base to a file*/
void Pizza_menuRepository::storemenu(string topping_id, const Pizza_menu pizzamenu)
{
    ofstream fout;
    fout.open("pizza_menu.txt",ios::app);
    fout << pizzamenu << "," << topping_id << endl;
    fout.close();
}
