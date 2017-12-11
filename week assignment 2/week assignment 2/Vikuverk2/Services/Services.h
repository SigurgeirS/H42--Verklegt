#ifndef SERVICES_H
#define SERVICES_H
#include <vector>
#include<string>
#include <sstream>
#include "../Model/Model.h"
#include "../Repo/Repo.h"

class Services
{
public:
    Services();
    void Store_employees(Model& model);
    ///Checks if the correct line is found
    bool find_string(string line, string to_find, int column);
    ///Stores the lines that are found in a vector
    vector<string> Find_salary_records(string to_find, int column);
    ///Returns a column from a line
    string get_column(string line, int column);
    int convert_int_to_string(string text);
    vector<int> salaries_after_year(string ssn, string year);
    int Calculate_total_year_salary(string ssn, string year);
    int highest_total_year_salary(string ssn, string year);
    string highest_total_year_salary_name(string year);
    ///Finds the months for a given ssn
    vector<string> find_month(string ssn);
    bool is_same(vector<string> items,string input,int column);
    vector<string> replace_line(string file,string month,string line);
    virtual ~Services();
private:
};

#endif
