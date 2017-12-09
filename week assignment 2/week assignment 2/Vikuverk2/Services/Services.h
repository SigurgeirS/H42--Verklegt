#ifndef SERVICES_H
#define SERVICES_H
#include <vector>
#include <sstream>
#include "../Model/Model.h"
#include "../Repo/Repo.h"
#include <vector>
#include<string>
class Services
{
    public:
        Services();
        void Store_employees(Model& model);
        vector<string> read_salary_records_with_ssn(string ssn);
        bool find_string(string line, string to_find, int column);
        vector<string> Find_salary_records(string to_find, int column);
        string get_column(string line, int column);
        int convert_int_to_string(string text);
        vector<int> salaries_after_year(string ssn, string year);
        int Calculate_total_year_salary(string ssn, string year);
        int highest_total_year_salary(string ssn, string year);
        string highest_total_year_salary_name(string ssn, string year);
        string highest_total_year_salary_name(string year);
        virtual ~Services();
    private:
};

#endif // SERVICES_H
