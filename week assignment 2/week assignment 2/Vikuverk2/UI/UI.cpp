//
//  UI.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "UI.h"

void UI::display_items(vector<string> items){
     for(unsigned int i = 0; i <  items.size(); i++){
        cout << items[i] << endl;
     }
}

void UI::main_menu(){

    int selection = 0;
    string ssn = "";
    string year = "";
    Model model;
    Services services;
	cout << "Press 1: To add salary to record"  << endl;
	cout << "Press 2: To get all salary records for specific SSN" << endl;
	cout << "Press 3: To get total salary for a given year" << endl;
	cout << "press 4: To get the name of the highest total salary for a given year" << endl;
	cout << "Press 5: Quit" << endl;
	cin >> selection;

	switch(selection){
    case 1:
        cin >> model;
        services.Store_employees(model);

    break;
    case 2 : {
        cout << "Type in a ssn:" << endl;
        cin >> ssn;
        this->display_items(services.Find_salary_records(ssn, 2));
    }
    break;
    case 3:{
        cout << "Type in an ssn:";
        cin >> ssn;
        cout << "Type in a year: ";
        cin >> year;
        cout << services.Calculate_total_year_salary(ssn,year) << endl;
    }
    break;
    case 4: {
        cout << services.highest_total_year_salary_name("1997") << endl;
    }
	}
    }
	/*char input;
	cin >> input;
	domain.validate_input(input);*/


