///This class is used to record toppings,size,menu,base,other products and location of the pizza place (Admin class)
#include "PizzaUI.h"
#include "MainUI.h"
#include "../Model/Base.h"
#include "../Model/Pizza.h"
#include "../Repo/PizzaRepository.h"
#include "../Model/Pizza_size.h"
#include "../Repo/Find_line.h"
#include<iostream>

using namespace std;
PizzaUI::PizzaUI()
{
}

PizzaRepository PizzaUI::get_pizzarepo(){
    PizzaRepository pizzarepo;
    return pizzarepo;
}

Find_line PizzaUI::get_find_line(){
     Find_line findline;
     return findline;
}
/*Displays recorded data more user friendly*/

/*void display_toppings(string* toppings, int topCnt){
     string ID = "";
     string topping_name = "";
     string one_topping[topCnt];
     double price = 0;

     cout << "ID  Topping name  Topping price " << endl;
     for(int i = 0; i < topCnt; i++)
    {
       for(unsigned int j = 0; j < toppings[i].length(); i++){
             if(toppings[i][j] != ' '){
                 ID += toppings[i][j];
             }
        }
    }
}
*/
void goback(){
    cout << endl;
    string a = "";
    cout << "Press any key to go back..." << endl;
    cin >> a;
}
/*Reads lines from an array*/
void display(int counter, string* line_array){
     cout << "=====================================================" << endl;
     for(int i = 0; i < counter; i++){
        cout << line_array[i] << endl;
    }
     cout << "=====================================================" << endl;
}
/*Record toppings to a file*/
void PizzaUI::record_toppings()
{
    int topCnt = 0;
    cout << "How many toppings: " << endl;
    cin >> topCnt;
    string* toppings = new string[topCnt];
    for(int i = 0; i < topCnt; i++)
    {
        Topping topping;
        cin >> topping;
        get_pizzarepo().storeToppings(topping);
        //Pizza.addTopping(topping);

        toppings[i] = get_pizzarepo().read_toppings(topping.get_id());
    }
        cout << endl;
        cout << "Toppings recorded:" << endl;
        display(topCnt,toppings);
        delete[] toppings;
}
/*Records some bases to a file*/
void PizzaUI::record_base(){
    int baseCnt = 0;
    cout << "How many bases: " << endl;
    cin >> baseCnt;
    string* bases = new string[baseCnt];

    for(int i = 0; i < baseCnt; i++){
        Base base;
        cin >> base;
        get_pizzarepo().storeBase(base);
        bases[i] = get_find_line().retrieveItem("pizzabase.txt",base.get_id());
    }

    display(baseCnt,bases);
    delete[] bases;
}
/*Record sizes to a file*/
void PizzaUI::record_sizes(){
    int sizeCnt = 0;
    cout << "How many sizes: " << endl;
    cin >> sizeCnt;
    string* sizes = new string[sizeCnt];

    for(int i = 0; i < sizeCnt; i++){
        Pizza_size pizza_size;
        cin >> pizza_size;
        get_pizzarepo().storeSize(pizza_size);
    }
    display(sizeCnt,sizes);
    delete[] sizes;
}
void PizzaUI::startUI()
{
    int selection = 0;
    while(selection != 8)
    {
        system("CLS");
        cout << "1. Record sizes" << endl;
        cout << "2. Record toppings" << endl;
        cout << "3. Record base" << endl;
        cout << "4. Record menu" << endl;
        cout << "5. Record other products" << endl;
        cout << "6. Record locations" << endl;
        cout << "7. Back to menu" << endl;

        cin >> selection;

        switch(selection)
        {
        case 1:
        {
          record_sizes();
          goback();
        }
        break;

        case 2:
        {
          record_toppings();
          goback();
        }
        break;

        case 3:
        {
            record_base();
            goback();
        }
        break;
        }
    }
    MainUI mainui;
    mainui.startUI();
}
PizzaUI::~PizzaUI()
{
}
