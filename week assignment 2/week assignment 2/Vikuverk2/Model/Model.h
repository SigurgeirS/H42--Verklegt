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
    string get_name();
    string get_ssn();
    string get_salary();
    string get_month();
    string get_year();
private:
    string name;
    string ssn;
    string salary;
    string month;
    string year;
};
#endif
