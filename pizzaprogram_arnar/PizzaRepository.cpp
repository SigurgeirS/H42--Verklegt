#include "PizzaRepository.h"
#include<fstream>
#include "Pizza.h"

PizzaRepository::PizzaRepository()
{
    //ctor
}

PizzaRepository::~PizzaRepository()
{
    //dtor
}

void PizzaRepository::storePizza(const Pizza& pizza){
     ofstream fout;
     fout.open("pizzas.txt", ios::app);

     fout << pizza;

     fout.close();
}
Pizza PizzaRepository::retrievePizza(){

    ifstream fin;
     fin.open("pizzas.txt");
     Pizza pizza;
     fin >> pizza;

     fin.close();
     return pizza;
}
