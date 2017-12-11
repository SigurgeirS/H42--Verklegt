#include "Model.h"
Model::Model()
{
    this->name = "";
    this->ssn = "";
    this->salary = "";
    this->month = "";
    this->year = "";
}
string Model::get_ssn()
{
    return this->ssn;
}

string Model::get_month()
{
    return this->month;
}

string Model::get_year()
{
    return this->year;
}

void Model::set_ssn(string ssn){
    try{
    Validate validate;
    validate.okSSN(ssn);
    this->ssn = ssn;
    }
     catch(InvalidSsnException){
        cout << "Invalid ssn!" << endl;
    }
}

void Model::set_name(string name){
    try{
        Validate validate;
        validate.okName(name);
        this->name = name;
    }
      catch(InvalidNameException){
        cout << "Invalid name!" << endl;
    }
}

void Model::set_salary(string salary){
    try{
        Validate validate;
        validate.okSalary(salary);
    }
    catch(InvalidSalaryException){
        cout << "Invalid salary!" << endl;
    }
}

void Model::set_year(string year){

    try{
    Validate validate;
    validate.okYear(year);
    this->year = year;
    }
     catch(InvalidYearException){
        cout << "Invalid year!" << endl;
    }
}
void Model::set_month(string month){
    try{
    Validate validate;
    validate.okMonth(month);
    this->month = month;
    }
    catch(InvalidMonthException){
        cout << "Invalid month!" << endl;
    }
}

istream& operator >> (istream& in, Model& model)
{
    Validate validate;
    cout << "Enter name: ";
    in >> model.name;
    model.set_name(model.name);
    cout << "Enter social security number: ";
    in >> model.ssn;
    model.set_ssn(model.ssn);
    cout << "Enter salary: ";
    in >> model.salary;
    model.set_salary(model.salary);
    cout << "Enter month: ";
    in >> model.month;
    model.set_month(model.month);
    cout << "Enter year: ";
    in >> model.year;
    model.set_year(model.year);
    return in;
}

ostream& operator << (ostream& out, Model& model)
{
    stringstream stream;
    stream << model.name;
    string name = "";
    getline(stream,name);
    out << name << "," << model.ssn << "," << model.salary << "," << model.month << "," << model.year << endl;
    return out;
}

