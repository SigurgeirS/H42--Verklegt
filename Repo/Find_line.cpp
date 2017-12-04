///This class finds a line with ID as an input and returns the correct line.
#include "Find_line.h"
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

//Returns a line after an ID (Expecting a line starting with an ID, no spaces and ID is a number)
bool Find_line::find_ID(string line,int id_input){
     ostringstream convert;//Stream used for the conversion.
     convert << id_input;
     string id_input_string = convert.str();
     string id = "";
    for(unsigned int i = 0; i < line.length(); i++){
            if(line[i] == ' '){
                break;
            }
        id += line[i];
    }
    if(id_input_string == id){
        return true;
    }
    return false;
}

/*Returns a line from a file after an id*/
string Find_line::retrieveItem(string filename, int id){
    ifstream fin;
    string line;
    fin.open(filename);

    while(!fin.eof()){
            getline(fin,line);
            if(this->find_ID(line,id)){
            break;
          }
          line = "";
    }
    fin.close();
    return line;
}
///Returns each line in a vector
/*string* Find_line::retrive_all_items(){
    vector<string> toppings;
    string line = "";
    while(!fin.eof()){
            getline(fin,line);
    }
    return toppings;
}*/
