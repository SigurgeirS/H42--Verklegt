//
//  Model.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Model_h
#define Model_h

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Model {
public:
	Model();
	friend ostream& operator << (ostream& out, Model& model);
	friend istream& operator >> (istream& in, Model& model);
private:
    string name;
    string ssn;
    double salary;
    int month;
    int year;
};
#endif
