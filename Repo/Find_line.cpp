///This class finds a line with ID as an input and returns the correct line.
#include "Find_line.h"

Find_line::Find_line()
{
    //ctor
}

Find_line::~Find_line()
{
    //dtor
}

///Returns each line in a vector
vector<string> Find_line::retrive_all_items(string file)
{
    vector<string> toppings;
    ifstream fin;
    string line = "";
    fin.open(file);

    while(fin >> line)
    {
        getline(fin,line);
        toppings.push_back(line);
    }
    fin.close();
    return toppings;
}
