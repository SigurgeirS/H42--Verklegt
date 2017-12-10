#include "Model.h"
Model::Model()
{
    this->name = "";
    this->ssn = "";
    this->salary = "";
    this->month = "";
    this->year = "";
}
string Model::get_name(){
	return this->name;
}

string Model::get_ssn()
{
    return this->ssn;
}

string Model::get_salary(){
	return this->salary;
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

    try{
	    Validate val;
	    val.okName(model.getName());
	    val.okSSN(model.get_ssn());
	    val.okYear(model.get_year());
	    val.okSalary(model.get_salary());
	    val.okMonth(model.get_month());
    }
    catch(InvalidNameException){
	    cout<<"Invalid input in Name"<<endl;
    }
    catch(InvalidSsnException){
	    cout<<"Invalid input in SSN"<<endl;
    }
    catch(InvalidYearException){
	    cout<<"Invalid input in Year"<<endl;
    }
    catch(InvalidSalaryException){
	    cout<<"Invalid input in Salary"<<endl
    }
    catch(InvalidMonthException){
	    cout<<"Invalid input in Month"<<endl
    }


    return in;
}

ostream& operator << (ostream& out, Model& model)
{
    out << model.name << "," << model.ssn << "," << model.salary << "," << model.month << "," << model.year << endl;
    return out;
}

