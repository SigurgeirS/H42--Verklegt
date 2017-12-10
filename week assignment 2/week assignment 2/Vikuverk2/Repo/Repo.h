#ifndef Repo_h
#define Repo_h
#include <fstream>
#include <vector>
#include <stdio.h>
#include "../Model/Model.h"
#include "../Services/Services.h"
#include "../Exceptions/Exceptions.h"

using namespace std;

class Repo
{
public:
    void storeemployees(Model& model) throw (FileNotOpenException);
    vector<string> read_all_items(string file) throw (FileNotOpenException);

};
#endif
