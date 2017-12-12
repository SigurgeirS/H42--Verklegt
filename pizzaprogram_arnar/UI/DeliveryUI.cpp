//
//  UI.cpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 04/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#include "UI.hpp"

void DeliveryUI::mainMenu(){
	cout << "Please select pickup location" << endl;
	domain.get_location();
	cout << "Press 1: For order list" << endl;
	cout << "Press 2: For ready orders" << endl;
	cout << "Press 3: To get specific order" << endl;
	cout << "Press 4: To mark order as paid" << endl;
	cout << "Press 5: To mark order as delivered" << endl;
	char input;
	cin >> input;
	validate_input(input);
}

void DeliveryUI::validate_input(char input){
	if(input == '1'){
		domain.print_pizzalist();
	}
	else if(input== '2'){
		domain.print_ready_pizza();
	}
	else if(input == '3'){
		domain.get_specific_order();
	}
	else if(input== '4'){
		domain.paid();
	}
	else if(input== '5'){
		domain.delivered();
	}
}
