#include "Repo.h"
void Repo::storeemployees(Model& model)
{
    ofstream fout;
    fout.open("employees.txt",ios::app);
    fout << model;
    fout.close();
}

vector<string> Repo::retrive_all_items(string file)
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
