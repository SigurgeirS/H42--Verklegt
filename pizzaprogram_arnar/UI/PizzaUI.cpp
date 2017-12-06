///This class is used to record toppings,size,menu,base,other products and location of the pizza place (Admin class)
#include "PizzaUI.h"

using namespace std;
PizzaUI::PizzaUI()
{
}

Find_line PizzaUI::get_find_line()
{
    Find_line findline;
    return findline;
}

void display(string* toppings, int topCnt)
{
    for(int i = 0; i < topCnt; i++)
    {
        cout << toppings[i] << endl;
    }
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
Admin_domain PizzaUI::get_admin_domain()
{
    Admin_domain admindomain;
    return admindomain;
}

void PizzaUI::goback()
{
    cout << endl;
    string a = "";
    cout << "Press any key to go back..." << endl;
    cin >> a;
}
/*Reads lines from an array*/
void PizzaUI::display(int counter, string* line_array)
{
    cout << "=====================================================" << endl;
    for(int i = 0; i < counter; i++)
    {
        cout << line_array[i] << endl;
    }
    cout << "=====================================================" << endl;
}
/*Record toppings to a file*/
void PizzaUI::record_toppings()
{
//    string* toppings;
    int topCnt = 0;
    cout << "How many toppings: " << endl;
    cin >> topCnt;
    for(int i = 0; i < topCnt; i++)
    {
        Topping topping;
        cin >> topping;
        get_admin_domain().record_toppings(topping);
    }
    /*cout << endl;
    Topping topping;
    cout << "Toppings recorded:" << endl;
    display(toppings,topCnt);//Displays the toppings*/
}

/*Records some bases to a file*/
void PizzaUI::record_base()
{
    int baseCnt = 0;
    cout << "How many bases: " << endl;
    cin >> baseCnt;
    //string* bases = new string[baseCnt];
    for(int i = 0; i < baseCnt; i++)
    {
        Base base;
        cin >> base;
        get_admin_domain().record_base(base);
    }

    /*display(baseCnt,bases);
    delete[] bases;*/
}
/*Record sizes to a file*/
void PizzaUI::record_sizes()
{
    int sizeCnt = 0;
    cout << "How many sizes: " << endl;
    cin >> sizeCnt;
    string* sizes = new string[sizeCnt];

    for(int i = 0; i < sizeCnt; i++)
    {
        Pizza_size pizza_size;
        cin >> pizza_size;
        get_admin_domain().record_size(pizza_size);
    }
    display(sizeCnt,sizes);
    delete[] sizes;
}

void PizzaUI::record_menu()
{
    int pizzaCnt = 0;
    int toppingsCnt = 0;
    cout << "How many pizzas on the menu: " << endl;
    cin >> pizzaCnt;

    for(int i = 0; i < pizzaCnt; i++)
    {
        ToppingsUI toppingsui;
        Pizza_menu pizzamenu;
        cin >> pizzamenu;
        cout << "How many toppings? " << endl;
        cin >> toppingsCnt;

        for(int j = 0; j < toppingsCnt; j++)
        {
            cout << "Pick a topping: " << endl;
            toppingsui.startUI();
            string line = toppingsui.get_toppingline();
            get_admin_domain().record_menu(pizzamenu,line);
        }

    }
}

void PizzaUI::record_locations()
{
    Location location;
    int locationsCnt  = 0;
    cout << "How many locations? " << endl;
    cin >> locationsCnt;

    for(int i = 0; i < locationsCnt; i++)
    {
        cin >> location;
        get_admin_domain().record_location(location);
    }
}

void PizzaUI::record_other_products()
{
    Otherproducts otherproducts;
    int otherproductsCnt = 0;
    cout << "How many products? " << endl;
    cin >> otherproductsCnt;

    for(int i = 0; i < otherproductsCnt; i++)
    {
        cin >> otherproducts;
        get_admin_domain().record_other_products(otherproducts);
    }
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

        case 4:
        {
            record_menu();
            goback();
        }
        break;

        case 5:
        {
            record_other_products();
            goback();
        }
        break;

        case 6:
        {
            record_locations();
            goback();
        }
        break;
        }
        MainUI mainui;
        mainui.startUI();
    }
}
PizzaUI::~PizzaUI()
{
}
