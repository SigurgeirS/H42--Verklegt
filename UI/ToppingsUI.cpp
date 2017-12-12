#include "ToppingsUI.h"

using namespace std;
ToppingsUI::ToppingsUI()
{
    this->toppingline = "";
}

ToppingsUI::~ToppingsUI()
{
    //dtor
}
string ToppingsUI::get_toppingline()
{
    return toppingline;
}
void ToppingsUI::startUI()
{
    PizzaUI pizzaui;
    Admin_domain admindomain;
    vector<string> all_toppings = admindomain.read_all_toppings();
    vector<string> display_these_lines;
    int size = all_toppings.size();
    int selection = 0;

    for(int i = 0; i < (size-1); i++)
    {
//        display_these_lines.push_back(to_string((i+1) << ". " << all_toppings[i])));

    }
    pizzaui.read_format_three(display_these_lines);
    cin >> selection;
    cout << all_toppings[selection-1] << endl;
    this->toppingline = all_toppings[selection-1];
}
