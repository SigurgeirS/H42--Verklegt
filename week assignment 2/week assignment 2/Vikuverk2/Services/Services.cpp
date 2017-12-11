#include "Services.h"
const string filename = "employees.txt";
Services::Services()
{
}

Services::~Services()
{
    //dtor
}
vector<string> Services::find_month(string ssn_in)
{
    Repo repo;
    vector<string> months;
    vector<string> all_items = repo.read_all_items(filename);
    for(unsigned int i = 0; i < all_items.size(); i++)
    {
        if( get_column(all_items[i],2)  == ssn_in)
        {
            months.push_back(get_column(all_items[i],4));

        }
    }
    return months;
}
vector<string> Services::replace_line(string file,string input_month,string line)
{
    Model model;
    Repo repo;
    stringstream stream;
    vector<string> items = repo.read_all_items(file);
    for(unsigned int i = 0; i < items.size(); i++)
    {

        if(get_column(items[i],4) == input_month)
        {
            items[i] = line;
        }

    }
    return items;
}
bool Services::is_same(vector<string> items,string input,int column)
{
    for(unsigned int i = 0; i < items.size(); i++)
    {

        if(get_column(items[i],column) == input)
        {
            return true;
        }

    }
    return false;
}

void Services::Store_employees(Model& model)
{
    Repo repo;
    repo.storeemployees(model);
}

vector<string> Services::Find_salary_records(string to_find, int column)
{
    Repo repo;
    repo.read_all_items("employees.txt");
    vector<string> all_items = repo.read_all_items(filename);
    vector<string> found_lines;
    for(unsigned int i = 0; i < all_items.size(); i++)
    {
        if(find_string(all_items[i],to_find,column))
        {
            found_lines.push_back(all_items[i]);
        }
    }
    return found_lines;
}
string Services::get_column(string line, int column)
{
    stringstream stream;
    string found = "";
    stream << line;
    for(int i = 0; i < column; i++)
    {
        getline(stream,found,',');
    }
    return found;
}

bool Services::find_string(string line, string to_find, int column)
{
    string found = get_column(line,column);
    if(found == to_find)
    {
        return true;
    }
    return false;
}
int Services::convert_int_to_string(string text)
{
    //To convert a string to int:
    //http://www.cplusplus.com/forum/articles/9645/
    int Result = 0;
    stringstream convert(text);
    if(convert >> Result)
    {
        return Result;
    }
    return -1;
}

///Returns the salaries after year and ssn
vector<int> Services::salaries_after_year(string ssn, string year)
{
    vector<string> records_after_years = Find_salary_records(year,5);
    vector<string> found_salaries;
    vector<int> int_salaries;
    for(unsigned int i = 0; i < records_after_years.size(); i++)
    {
        found_salaries.push_back(get_column(records_after_years[i],3));
    }
    for(unsigned int i = 0; i < found_salaries.size(); i++)
    {
        int_salaries.push_back(convert_int_to_string(found_salaries[i]));
    }

    return int_salaries;
}
///Calculate total salary for the year after ssn and year
int Services::Calculate_total_year_salary(string ssn, string year)
{
    vector<int> int_salaries = salaries_after_year(ssn,year);
    int total_salaries = 0;
    for(unsigned int i = 0; i < int_salaries.size(); i++)
    {
        total_salaries += int_salaries[i];
    }
    return total_salaries;
}

int Services::highest_total_year_salary(string ssn, string year)
{
    vector<int> salaries = this->salaries_after_year(ssn,year);
    int highest_salaries = 0;
    for(unsigned int i = 0; i < salaries.size(); i++)
    {
        if(highest_salaries < salaries[i])
        {
            highest_salaries = salaries[i];
        }
    }
    return highest_salaries;
}

string Services::highest_total_year_salary_name(string year)
{
    Repo repo;
    vector<string> all_items = repo.read_all_items(filename);
    string name = "";
    int highest_salary = 0;
    for(unsigned int i = 0; i < all_items.size(); i++)
    {
        highest_salary = this->highest_total_year_salary(get_column(all_items[i],2),year);

        if(get_column(all_items[i],5) == year && get_column(all_items[i],3) == to_string(highest_salary))
        {
            name = get_column(all_items[i],1);
        }

    }
    return name;
}
