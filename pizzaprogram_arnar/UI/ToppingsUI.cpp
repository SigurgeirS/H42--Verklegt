#include "ToppingsUI.h"
#include "../Repo/Find_line.h"
#include "../Domain/Admin_domain.h"
#include<vector>
#include<iostream>
using namespace std;
ToppingsUI::ToppingsUI()
{
    //ctor
}

ToppingsUI::~ToppingsUI()
{
    //dtor
}
Admin_domain get_admin_dom(){
    Admin_domain admindomain;
    return admindomain;
}
void ToppingsUI::startUI(){
     vector<string> all_toppings = get_admin_dom().read_all_toppings();
     int size = all_toppings.size();
     int selection = 0;
     cout << "Pick a topping: " << endl;
     for(int i = 0; i < (size-1); i++){
        cout << (i+1) << ". " << all_toppings[i] << endl;
     }
     cin >> selection;
     cout << all_toppings[selection-1] << endl;

}
