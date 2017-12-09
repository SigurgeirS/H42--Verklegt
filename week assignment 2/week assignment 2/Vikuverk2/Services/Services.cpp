#include "Services.h"

Services::Services()
{
    //ctor
}

Services::~Services()
{
    //dtor
}

void Services::Store_employees(Model& model)
{
    Repo repo;
    repo.storeemployees(model);
}
///Stores the lines that are found in a vector
vector<string> Services::Find_salary_records(string to_find, int column){
    Repo repo;
    repo.retrive_all_items("employees.txt");
    vector<string> all_items = repo.retrive_all_items("employees.txt");
    vector<string> found_lines;
    for(unsigned int i = 0; i < all_items.size(); i++){
     if(find_string(all_items[i],to_find,column)){
      found_lines.push_back(all_items[i]);
     }
    }
    return found_lines;
}
string Services::get_column(string line, int column){
    stringstream stream;
    string found = "";
    stream << line;
        for(int i = 0; i < column; i++)
        {
            getline(stream,found,',');
        }
        return found;
}
///Checks if the correct line is found
bool Services::find_string(string line, string to_find, int column)
{
        string found = get_column(line,column);
        if(found == to_find)
            {
                return true;
            }
            return false;
}
int Services::convert_int_to_string(string text){
    //To convert a string to int:
    //http://www.cplusplus.com/forum/articles/9645/
    int Result = 0;
    stringstream convert(text); //Put text in the stringsstream buffer

    if(convert >> Result){//If you can direct the stream to the Result variable
        return Result;
    }
    return -1;
}

///Returns the salaries after year and ssn
vector<int> Services::salaries_after_year(string ssn, string year){
     vector<string> records_after_years = Find_salary_records(year,5);
     vector<string> found_salaries;
     vector<int> int_salaries;
     for(unsigned int i = 0; i < records_after_years.size(); i++){
        found_salaries.push_back(get_column(records_after_years[i],3));
     }
     for(unsigned int i = 0; i < found_salaries.size(); i++){
          int_salaries.push_back(convert_int_to_string(found_salaries[i]));
     }

     return int_salaries;
}
///Calculate total salary for the year after ssn and year
int Services::Calculate_total_year_salary(string ssn, string year){
     vector<int> int_salaries = salaries_after_year(ssn,year);
     int total_salaries = 0;
     for(unsigned int i = 0; i < int_salaries.size(); i++){
         total_salaries += int_salaries[i];
     }
     return total_salaries;
}

int Services::highest_total_year_salary(string ssn, string year){
    vector<int> salaries = this->salaries_after_year(ssn,year);
    int highest_salaries = 0;
    for(unsigned int i = 0; i < salaries.size(); i++){
        if(highest_salaries < salaries[i]){
            highest_salaries = salaries[i];
        }
    }
    return highest_salaries;
}

string Services::highest_total_year_salary_name(string year){
     Repo repo;
     vector<string> all_items = repo.retrive_all_items("employees.txt");
     string name = "";
     int highest_salary = 0;
     for(unsigned int i = 0; i < all_items.size(); i++){
     highest_salary = this->highest_total_year_salary(get_column(all_items[i],2),year);

     if(get_column(all_items[i],5) == year && get_column(all_items[i],3) == to_string(highest_salary)){
        name = get_column(all_items[i],1);
     }

     }
    return name;
}
