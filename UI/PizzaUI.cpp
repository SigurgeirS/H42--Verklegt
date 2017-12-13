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

///Reading ID,NAME,PRICE
void PizzaUI::read_format_three(vector<string> lines){
    string ID = "";
    string name = "";
    string price = "";
    Admin_domain admindomain;

     for(unsigned int i = 0; i < lines.size(); i++){
         ID = admindomain.get_column(lines[i],1);
         name = admindomain.get_column(lines[i],2);
         price = admindomain.get_column(lines[i],3);
     }

    cout << "===========================" << endl;
    cout << "|  ID  |  NAME  |  PRICE  |" << endl;
    cout << "===========================" << endl;
    cout << "   "<<ID<<"  "<<name<<" "<<price<< endl;
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
    string input = "";
    cout << "Press any key to go back..." << endl;
    cin >> input;
}
/*Reads lines from an array*/
void PizzaUI::display(int counter, string* line_array)
{

}

/*Record toppings to a file*/
void PizzaUI::record_toppings()
{
    try{
      int topCnt = 0;
      cout << "How many toppings: " << endl;
      cin >> topCnt;
      get_admin_domain().check_topping_count(topCnt);
    for(int i = 0; i < topCnt; i++)
    {
        Topping topping;
        cin >> topping;
        get_admin_domain().record_toppings(topping);
    }

    }
    catch(InvalidToppingCount){
        cout << "Invalid topping number!" << endl;
    }

    catch(InvalidToppingName){
        cout << "Invalid topping name!" << endl;
    }
    catch(InvalidToppingPrice){
        cout << "Invalid topping price!" << endl;
    }
}
/*Records some bases to a file*/
void PizzaUI::record_base()
{
    try{
    int baseCnt = 0;
    cout << "How many bases: " << endl;
    cin >> baseCnt;
    Admin_domain().check_base_count(baseCnt);

    for(int i = 0; i < baseCnt; i++)
    {
        Base base;
        cin >> base;
        get_admin_domain().record_base(base);
    }
}
    catch(InvalidBaseCount){
        cout << "Invalid base count!" << endl;
    }
    catch(InvalidBaseName){
        cout << "Invalid base name!" << endl;
    }
    catch(InvalidBasePrice){
         cout << "Invalid base price!" << endl;
    }
    /*display(baseCnt,bases);
    delete[] bases;*/
}
/*Record sizes to a file*/
void PizzaUI::record_sizes()
{
    try{
    int sizeCnt = 0;
    cout << "How many sizes: " << endl;
    cin >> sizeCnt;
    get_admin_domain().check_size_count(sizeCnt);
    for(int i = 0; i < sizeCnt; i++)
    {
        Pizza_size pizza_size;
        cin >> pizza_size;
        get_admin_domain().record_size(pizza_size);
    }
    }
    catch(InvalidSize){
        cout << "Invalid size!" << endl;
    }
    catch(Invalidsizeprice){
        cout << "Invalid size price!" << endl;
    }
    catch(InvalidSizeCount){
        cout << "Invalid size count!" << endl;
    }
}

void PizzaUI::record_menu()
{
    try{
    int pizzaCnt = 0;
    int toppingsCnt = 0;
    cout << "How many pizzas on the menu: " << endl;
    cin >> pizzaCnt;
    get_admin_domain().check_menu_count(pizzaCnt);
    for(int i = 0; i < pizzaCnt; i++)
    {
        ToppingsUI toppingsui;
        Pizza_menu pizzamenu;
        cin >> pizzamenu;
        get_admin_domain().check_menu_name(pizzamenu);
        cout << "How many toppings? " << endl;
        cin >> toppingsCnt;
        get_admin_domain().check_topping_count(toppingsCnt);
        for(int j = 0; j < toppingsCnt; j++)
        {
            cout << "Pick a topping: " << endl;
            toppingsui.startUI();
            string line = toppingsui.get_toppingline();
            get_admin_domain().record_menu(pizzamenu,line);
        }
    }
    }
    catch(InvalidMenuCount){
          cout << "Invalid menu number!" << endl;
    }
    catch(InvalidPizzaMenuName){
          cout << "Invalid menu name!" << endl;
    }
    catch(InvalidToppingCount){
          cout << "Invalid topping count!" << endl;
    }
}

void PizzaUI::record_locations()
{
    try{
    Location location;
    int locationsCnt  = 0;
    cout << "How many locations? " << endl;
    cin >> locationsCnt;
    get_admin_domain().check_location_count(locationsCnt);
    for(int i = 0; i < locationsCnt; i++)
    {
        cin >> location;
        get_admin_domain().record_location(location);
    }
    }
    catch(InvalidLocationCount){
          cout << "Invalid location number!" << endl;
    }
    catch(InvalidLocationName){
        cout << "Invalid location name!" << endl;
    }
}

void PizzaUI::startUI()
{

    int selection = 0;
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
PizzaUI::~PizzaUI()
{
}
