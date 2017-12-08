//
//  Exceptions.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Exceptions_h
#define Exceptions_h

#include <stdio.h>
class Exceptions {
public:
	void name_is_valid();
	void ssn_is_valid();
	void salary_is_valid();
	bool date_is_valid();
	bool file_is_open();
};
#endif /* Exceptions_hpp */
