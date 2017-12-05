///This class finds a line with ID as an input and returns the correct line.
#include "Find_line.h"
#include "../Domain/Admin_domain.h"
#include<sstream>
#include<fstream>
#include<vector>
Find_line::Find_line()
{
    //ctor
}

Find_line::~Find_line()
{
    //dtor
}
/*Admin_domain Find_line::get_admin_domain(){
    Admin_domain admindomain;
    return admindomain;
}*/
/*Returns a line from a file after an id*/
string Find_line::retrieveItem(string filename, string id){
    ifstream fin;
    string line;
    Admin_domain admindomain;
    fin.open(filename);

    while(!fin.eof()){
            getline(fin,line);
            if(admindomain.find_ID(line) == id){
            break;
          }
          line = "";
    }
    fin.close();
    return line;
}
///Returns each line in a vector
vector<string> Find_line::retrive_all_items(string file){
    vector<string> toppings;
    ifstream fin;
    string line = "";
    fin.open(file);

    while(!fin.eof()){
            getline(fin,line);
            toppings.push_back(line);
          }
    fin.close();
    return toppings;
}
