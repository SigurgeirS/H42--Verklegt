#include "Pizza_menuRepository.h"
#include <fstream>
Pizza_menuRepository::Pizza_menuRepository()
{
    //ctor
}

Pizza_menuRepository::~Pizza_menuRepository()
{
    //dtor
}

/*Writes a base to a file*/
void Pizza_menuRepository::storemenu(const Pizza_menu pizzamenu){
     ofstream fout;
     fout.open("pizza_menu.txt",ios::app);
     fout << pizzamenu;
     fout.close();
}
