//
//  Model.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Model_hpp
#define Model_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Model {
public:
	Model();
	Model(string name, int ssn, double salary, int month, int year);
	string get_name();
	string set_name(string name);
	int get_ssn();
	int set_ssn(int ssn);
	double get_salary();
	double set_salary(double salary);
	int get_month();
	int set_month(int month);
	int get_year();
	int set_year(int year);
	friend ostream& operator << (ostream& out, Model& model);
	friend istream& operator >> (istream& in, Model& model);
private:
	string _name;
	int _ssn;
	double _salary;
	int _month;
	int _year;
};
#endif /* Module_hpp */


#endif /* Model_hpp */
