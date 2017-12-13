#ifndef FIND_LINE_H
#define FIND_LINE_H
#include "../Domain/Admin_domain.h"
#include<sstream>
#include<fstream>
#include<vector>

using namespace std;
class Find_line
{

public:
    Find_line();
    bool find_ID(string line,int id_input);
    Find_line get_find_line();
    string retrieveItem(string filename, string id);
    vector<string> retrive_all_items(string file);
    virtual ~Find_line();

private:
};

#endif // FIND_LINE_H
