//
//  Model.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Model.h"
Model::Model(){
	_name = "";
	_ssn = 0;
	_salary = 0.0;
	_month = 0;
	_year = 0;
}
Model::Model(string name, int ssn, double salary, int month, int year){
	_name = name;
	_ssn = ssn;
	_salary = salary;
	_month = month;
	_year = year;
}
string Model::get_name(){
	return _name;
}
string Model::set_name(string name){
	_name = name;
}
int Model::get_ssn(){
	return _ssn;
}
int Model::set_ssn(int ssn){
	_ssn = ssn;
}
double Model::get_salary(){
	return _salary;
}
double Model::set_salary(double salary){
	_salary = salary;
}
int Model::get_month(){
	return _month;
}
int Model::set_month(int month){
	_month = month;
}
int Model::get_year(){
	return _year;
}
int Model::set_year(int year){
	_year = year;
}
ostream& operator << (ostream& out, Model& model){
	out << model._name << "," << model._ssn << "," << model._salary << "," << model._month << "," << model._year << endl;
	return out;
}
istream& operator >> (istream& in, Model& model){
	cout << "Enter name: ";
	in >> model._name;
	cout << "Enter social security number: ";
	in >> model._ssn;
	cout << "Enter salary: ";
	in >> model._salary;
	cout << "Enter month: ";
	in >> model._month;
	cout << "Enter year: ";
	in >> model._year;
	return in;
}
