//This file reads and writes the pizza to a text file.
//REMEMBER VERBOSE!!!!!
#include "PizzaRepository.h"

PizzaRepository::PizzaRepository()
{
    //ctor
}

void PizzaRepository::storePizza(const Pizza& pizza)
{
    ofstream fout;
    fout.open("pizzas.txt",ios::app);
    if(fout.is_open()){

   	fout << pizza;

    	fout.close();
    }else{
	    //throw exception
    }
}
vector<Pizza> PizzaRepository::fetchPizzas()
{
	vector<Pizza> pizzas;
	ifstream fin;

	fin.open("pizzas.txt");

	if(fin.is_open()){
		Pizza pizza;
		pizza.verbose = false;
		while(fin.good()){
			fin>>pizza;
			pizzas.push_back(pizza);
		}
		fin.close();
		pizzas.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return pizzas;
}
	
