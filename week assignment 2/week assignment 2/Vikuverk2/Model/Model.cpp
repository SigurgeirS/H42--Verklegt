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

istream& operator >> (istream& in, Model& model)
{
    cout << "Enter name: ";
    in >> model.name;
    cout << "Enter social security number: ";
    in >> model.ssn;
    cout << "Enter salary: ";
    in >> model.salary;
    cout << "Enter month: ";
    in >> model.month;
    cout << "Enter year: ";
    in >> model.year;
    return in;
}

ostream& operator << (ostream& out, Model& model)
{
    out << model.name << "," << model.ssn << "," << model.salary << "," << model.month << "," << model.year << endl;
    return out;
}

