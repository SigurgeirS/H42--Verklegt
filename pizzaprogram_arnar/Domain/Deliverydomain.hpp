//
//  domain.hpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 12/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef domain_hpp
#define domain_hpp
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Domain{
public:
	char get_pickup();
	void print_pizzalist();
	void print_ready_pizza();
	void get_specific_order();
	bool paid();
	bool delivered();
private:
}

#endif /* domain_hpp */
