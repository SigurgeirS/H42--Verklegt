#include "Repo.h"
const string filename = "employees.txt";
void Repo::storeemployees(Model& model)
{
    Services services;
    vector<string> items = this->read_all_items(filename);
    if(services.is_same(items,model.get_month(),4) && services.is_same(items,model.get_year(),5))
    {
        ofstream fout;
        stringstream stream;
        string line = "";
        stream << model;
        getline(stream,line);
        items = services.replace_line(filename,model.get_month(),line);
        fout.open(filename);
        for(unsigned int i = 0; i < items.size(); i++)
        {
            fout << items[i] << endl;
        }
        fout.close();
    }
    else
    {
        ofstream fout;
        fout.open(filename,ios::app);
        fout << model;
        fout.close();
    }
}

vector<string> Repo::read_all_items(string file)
{
    vector<string> items;
    ifstream fin;
    string line = "";
    fin.open(file);

    while(!fin.eof())
    {
        getline(fin,line);
        items.push_back(line);
    }
    fin.close();
    return items;
}
