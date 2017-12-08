//
//  UI.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "UI.hpp"
#include "Domain.hpp"

void UI::main_menu(){
	cout << "Press 1: To add salary to record"  << endl;
	cout << "Press 2: To get all salary records for specific SSN" << endl;
	cout << "Press 3: To get total salary for a given year" << endl;
	cout << "press 4: To get the name of the highest total salary for a given year" << endl;
	Salary salary;
	salary.validate_input();
}

