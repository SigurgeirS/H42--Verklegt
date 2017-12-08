//
//  Repo.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Repo_hpp
#define Repo_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

class Repo {
public:
	friend ostream& operator << (ostream& out, Repo& repo);
	friend istream& operator >> (istream& in, Repo& repo);
};
#endif /* Repo_hpp */
