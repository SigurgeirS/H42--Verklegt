//
//  Repo.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Repo_h
#define Repo_h

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

class Repo {
public:
	friend ofstream& operator << (ofstream& out, Repo& repo);
	friend ifstream& operator >> (ifstream& in, Repo& repo);
};
#endif /* Repo_hpp */
