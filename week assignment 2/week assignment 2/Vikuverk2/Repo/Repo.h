//
//  Repo.hpp
//  week assignment 2
//
//  Created by Halldór Alvar Kjartansson on 06/12/2017.
//  Copyright © 2017 Halldór Alvar Kjartansson. All rights reserved.
//

#ifndef Repo_h
#define Repo_h
#include <fstream>
#include <vector>
#include "../Model/Model.h"

using namespace std;

class Repo {
public:
	vector<string> retrive_all_items(string file);
	void storeemployees(Model& model);
};
#endif /* Repo_hpp */
