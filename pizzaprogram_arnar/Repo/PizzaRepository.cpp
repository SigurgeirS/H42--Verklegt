<<<<<<< HEAD
/*
This file reads and writes the pizza to a text file.
*/
#include "PizzaRepository.h"
#include<fstream>
#include "../Model/Pizza.h"

PizzaRepository::PizzaRepository()
{
    //ctor
}

PizzaRepository::~PizzaRepository()
{
    //dtor
}

void PizzaRepository::storePizza(const Pizza& pizza)
{
    ofstream fout;
    fout.open("pizzas.txt",ios::app);

    fout << pizza << endl;

    fout.close();
}
Pizza PizzaRepository::retrievePizza()
{

    ifstream fin;
    fin.open("pizzas.txt");
    Pizza pizza;
    fin >> pizza;

    fin.close();
    return pizza;
}
=======
///This class records toppings,base and size to a file so we can make some pizza!
#include "PizzaRepository.h"
#include "../Repo/PizzaRepository.h"

PizzaRepository::PizzaRepository()
{

}

PizzaRepository::~PizzaRepository()
{
    //dtor
}
/*PizzaRepository PizzaRepository::pizzarepo()
{
    PizzaRepository pizzarepo;
    return pizzarepo;
}*/
//returns an instance of Find_line
Find_line get_find_line();
/*Writes the toppings to a file*/
void PizzaRepository::storeToppings(const Topping& topping)
{
    ofstream fout;
    fout.open("pizza_topping.txt",ios::app);
    fout << topping;
    fout.close();
}
/*Writes a base to a file*/
void PizzaRepository::storeBase(const Base& base)
{
    ofstream fout;
    fout.open("pizza_base.txt",ios::app);
    fout << base;
    fout.close();
}

void PizzaRepository::storeSize(const Pizza_size& pizza_size)
{
    ofstream fout;
    fout.open("pizza_size.txt",ios::app);
    fout << pizza_size;
    fout.close();
}

/*string PizzaRepository::read_toppings(int ID)
{
//get_find_line().retrieveItem("pizza_topping.txt",ID);
}*/
>>>>>>> a8bf7059d9df22810c8fa6bd54be9ab501350072
