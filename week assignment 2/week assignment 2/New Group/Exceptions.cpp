//
//  Exceptions.cpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "Exceptions.hpp"
#include "Model.hpp"
#include "Domain.hpp"
#include "Repo.hpp"
void Exceptions::name_is_valid(){
	// einungis bókstafir get verið meira en eitt orð
}
void Exceptions::ssn_is_valid(){
	// kennitala er einungis 10 tölustafir
}
void Exceptions::salary_is_valid(Salary){
	// þarf að vera legit tala
}
bool Exceptions::date_is_valid(){
	// einungis 12 manudir og ekki hærra en 2017
	if(Model::get_month() > 0 || Model::get_year() < 2017){
		return true;
	}
	else{
		return false;
	}
}
bool Exceptions::file_is_open(){
	//checkar hvort skjalið sé opið
	if(fin.is_open("Data.txt")){
		return true;
	}
	else {
		cout << "The file isn't open!";
		return false;
	}
}
