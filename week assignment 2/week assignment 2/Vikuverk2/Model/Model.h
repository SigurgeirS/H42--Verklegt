#ifndef Model_h
#define Model_h
#include <stdio.h>
#include <iostream>
#include <string>
#include "../Services/Validate.h"
using namespace std;

class Model
{
public:
    Model();
    friend ostream& operator << (ostream& out, Model& model);
    friend istream& operator >> (istream& in, Model& model);
    string get_ssn();
    string get_month();
    string get_year();
    void set_ssn(string ssn);
    void set_month(string month);
    void set_year(string year);
    void set_name(string name);
    void set_salary(string salary);
private:
    string name;
    string ssn;
    string salary;
    string month;
    string year;
};
#endif
