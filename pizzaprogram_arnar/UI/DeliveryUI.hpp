//
//  UI.hpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 04/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef UI_hpp
#define UI_hpp
#include <iostream>
#include "domain.hpp"
using namespace std;

#include <stdio.h>
class DeliveryUI {
public:
	void mainMenu();
	void validate_input(char input);
	
private:
	Domain domain;
};

#endif /* UI_hpp */
