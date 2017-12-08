//
//  Domain.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Domain_h
#define Domain_h
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#include "Exceptions.h"

using namespace std;

class Domain {
public:
	Domain();
	Domain(string name, int ssn, double salary, int month, int year);
	void add_salary(const Domain& domain);
	vector<string> display_salary(string ssn);
	void total_salary_year(string line);
	void highest_paid();
	void add_salary();
	void validate_input(int input);
	vector<string> Find_columns(vector<string> filestrings,string to_find);
	void display_total_year_salary();
	string Find(string line,string findstr,int column);
};

#endif /* Domain_hpp */
