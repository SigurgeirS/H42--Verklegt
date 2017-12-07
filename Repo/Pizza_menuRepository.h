#ifndef PIZZA_MENUREPOSITORY_H
#define PIZZA_MENUREPOSITORY_H
#include "../Model/Pizza_menu.h"
#include <fstream>

class Pizza_menuRepository
{
public:
    Pizza_menuRepository();
    void storemenu(string id, const Pizza_menu pizzamenu);
    virtual ~Pizza_menuRepository();

protected:

private:
};

#endif // PIZZA_MENUREPOSITORY_H
