//
//  Domain.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Domain.hpp"
#include "UI.hpp"

void Salary::validate_input(){
	char input;
	cin >> input;
	if (input == '1'){
		salary.add_salary(salary);
	}
	else if(input == '2'){
		salary.display_salary();
	}
	else if(input == '3'){
		salary.total_salary_year();
	}
	else if(input == '4'){
		salary.highest_paid();
	}
	else{
		cout << "invalid input" << endl << "Please enter 1,2,3 or 4" << endl;
	}
}


void Salary::add_salary(const Salary& salary){
	if(Exceptions::salary_is_valid(Salary)){
		// add salary to ssn
	}
}

void Salary::display_salary(){
	// display salary for specific ssn
}

void Salary::total_salary_year(){
	// gets  total salary for the whole year
}

void Salary::highest_paid(){
	//highest paid employe
}


