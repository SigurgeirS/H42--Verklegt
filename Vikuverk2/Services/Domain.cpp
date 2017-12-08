//
//  Domain.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Domain.h"
#include "../UI/UI.h"

Domain::Domain(){

}

void Domain::add_salary(){
//Write to a file (Haldors thing)
}

vector<string> Domain::Find_columns(vector<string> filestrings,string to_find){
     vector<string> found_columns;
     for(unsigned int i = 0; i < filestrings.size(); i++){
        found_columns.push_back(Find(filestrings[i],to_find,2));
	}
}

//Takes a line and finds something in it like ssn, name and so on
string Domain::Find(string line, string findstr,int column){
    stringstream stream;
     stream << line;
     string tofind = "";
     for(int i = 0; i < column; i++){
     getline(stream,tofind,',');
     }

     if(tofind == findstr){
        return line;
     }
}

vector<string> Domain::display_salary(string ssn){
	//Read the whole thing from the
	vector<string> filestrings;
	stringstream stream;
	//Putting something in the vector...
	filestrings.push_back("Arnar,1234567890,700000,1,1990");
	filestrings.push_back("Benedikt,0901972749,600000,1,1997");
	filestrings.push_back("Halldor,1234567890,500000,1,1997");
	return this->Find_columns(filestrings,ssn);
}

void Domain::display_total_year_salary(){
     vector<string> filestrings;
	stringstream stream;
	//Putting something in the vector...
	filestrings.push_back("Arnar,1234567890,700000,1,1990");
	filestrings.push_back("Benedikt,0901972749,600000,1,1997");
	filestrings.push_back("Halldor,1234567890,500000,1,1997");

}

void Domain::total_salary_year(string line){
	// gets  total salary for the whole year
}

void Domain::highest_paid(){
	//highest paid employe
}

void Domain::validate_input(int input){
//Validation
}


