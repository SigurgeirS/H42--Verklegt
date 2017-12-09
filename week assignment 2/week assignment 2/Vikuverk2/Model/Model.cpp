//
//  Model.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Model.h"
Model::Model(){
    name = "";
    ssn = "";
    salary = 0;
    month = 0;
    year = 0;
}
istream& operator >> (istream& in, Model& model){
	cout << "Enter name: ";
	in >> model.name;
	cout << "Enter social security number: ";
	in >> model.ssn;
	cout << "Enter salary: ";
	in >> model.salary;
	cout << "Enter month: ";
	in >> model.month;
	cout << "Enter year: ";
	in >> model.year;
	return in;
}

ostream& operator << (ostream& out, Model& model){
	out << model.name << "," << model.ssn << "," << model.salary << "," << model.month << "," << model.year << endl;
	return out;
}

