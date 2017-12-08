//
//  Domain.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Domain_hpp
#define Domain_hpp

#include <stdio.h>
#include <iostream>
#include "Exceptions.hpp"
using namespace std;

class Salary {
public:
	Salary();
	Salary(string name, int ssn, double salary, int month, int year);
	void add_salary(const Salary& salary);
	void display_salary();
	void total_salary_year();
	void highest_paid();
	void validate_input();
};

#endif /* Domain_hpp */
