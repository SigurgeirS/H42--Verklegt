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
    Admin_domain admindomain;
    vector<string> all_toppings = admindomain.read_all_toppings();
    int size = all_toppings.size();
    int selection = 0;
    cout << "Pick a topping: " << endl;
    for(int i = 0; i < (size-1); i++)
    {
        cout << (i+1) << ". " << all_toppings[i] << endl;

    }
    cin >> selection;
    cout << all_toppings[selection-1] << endl;
    this->toppingline = all_toppings[selection-1];
}
