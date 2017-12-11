#include "Repo.h"
const string filename = "employees.txt";
vector<string> Repo::read_all_items(string file)
{
    vector<string> items;
    ifstream fin;
    string line = "";
    fin.open(file);
try{
if(fin.is_open()){
    while(!fin.eof())
    {
        getline(fin,line);
        items.push_back(line);
    }
    fin.close();
}
else{
    throw CantOpenFile();
}
}
 catch(CantOpenFile){
        cout << "The file could not be opened :(" << endl;
    }
    return items;
}

void Repo::storeemployees(Model& model)
{
    Services services;
    try{
      //Opens the file and closes it again if it exist otherwise create the file and do the same thing.
      ifstream out;
      out.open(filename);
      vector<string> items;
      if(out.is_open()){
       items = this->read_all_items(filename);
       out.close();
      }

      else{
         throw CantOpenFile();
      }

    if(services.is_same(items,model.get_month(),4) && services.is_same(items,model.get_year(),5))
    {
        ofstream fout;
        stringstream stream;
        string line = "";
        stream << model;
        getline(stream,line);
        items = services.replace_line(filename,model.get_month(),line);
        fout.open(filename);
        if(fout.is_open()){
        for(unsigned int i = 0; i < items.size(); i++)
        {
            fout << items[i] << endl;
        }
        fout.close();
        }
        else{
            throw CantOpenFile();
        }
    }
    else
    {
        ofstream fout;
        fout.open(filename,ios::app);
        if(fout.is_open()){
        fout << model;
        fout.close();
        }

        else{
            throw CantOpenFile();
        }
    }
}
     catch(CantOpenFile){
        cout << "The file could not be opened :(" << endl;
    }
}
