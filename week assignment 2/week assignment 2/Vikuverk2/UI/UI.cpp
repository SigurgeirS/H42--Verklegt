#include "UI.h"
void UI::display_items(vector<string> items)
{
    cout << endl;
    for(unsigned int i = 0; i <  items.size(); i++)
    {
        cout << items[i] << endl;
    }
}
void UI::go_back(){
        string goback = "";
        cout << "Press any key and then enter (or just enter) to go back to menu...";
        cin >> goback;
    }

void UI::main_menu()
{
    Model model;
    Services services;
    int selection = 0;
    string ssn = "";
    string year = model.get_year();
    string goback = "";
    do{
    system("CLS");
    cout << "Press 1: To add salary to record"  << endl;
    cout << "Press 2: To get all salary records for specific SSN" << endl;
    cout << "Press 3: To get total salary for a given year" << endl;
    cout << "press 4: To get the name of the highest total salary for a given year" << endl;
    cout << "Press 5: Quit" << endl;
    cin >> selection;
    switch(selection)
    {
    case 1:
        cin >> model;
        services.Store_employees(model);
        go_back();
        break;
    case 2 :
    {
        cout << "Type in a ssn:" << endl;
        cin >> ssn;
        model.set_ssn(ssn);
        this->display_items(services.Find_salary_records(model.get_ssn(), 2));
        go_back();
    }
    break;
    case 3:
    {
        cout << "Type in an ssn:";
        cin >> ssn;
        cout << "Type in a year: ";
        cin >> year;
        cout << services.Calculate_total_year_salary(model.get_ssn(),year) << endl;
        go_back();
    }
    break;
    case 4:
    {
        cin >> year;
        cout << services.highest_total_year_salary_name(year) << endl;
        go_back();
    }
    }
    }while(selection != 5);
}
