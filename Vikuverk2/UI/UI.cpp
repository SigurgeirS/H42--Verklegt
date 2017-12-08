//
//  UI.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "UI.h"

void UI::main_menu(){
    Domain domain;
    int selection = 0;
    string ssn = "";

    do{
	cout << "Press 1: To add salary to record"  << endl;
	cout << "Press 2: To get all salary records for specific SSN" << endl;
	cout << "Press 3: To get total salary for a given year" << endl;
	cout << "press 4: To get the name of the highest total salary for a given year" << endl;
	cout << "Press 5: Quit" << endl;
	cin >> selection;

	switch(selection){
    case 2 :
        cin >> ssn;
        for(unsigned int i = 0; i < domain.display_salary(ssn).size(); i++){
        cout << domain.display_salary(ssn)[i] << endl;
        }
    break;
	}
    }
    while(selection != 5);
	/*char input;
	cin >> input;
	domain.validate_input(input);*/

}

