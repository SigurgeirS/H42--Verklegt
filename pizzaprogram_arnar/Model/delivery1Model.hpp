//
//  Delivery.hpp
//  Verklegt namskeið
//
//  Created by Halldór Alvar Kjartansson on 04/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Afhending_hpp
#define Afhending_hpp
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include <fstream>
#include "location.h"

class DeliveryUI {
public:
	friend ostream& operator <<(ostream& out, DeliveryUI& deli);
	friend istream& operator >>(istream& in, DeliveryUI& deli);
private:
	
};

#endif /* Afhending_hpp */

