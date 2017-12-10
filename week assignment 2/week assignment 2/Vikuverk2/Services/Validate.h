#ifndef VALIDATE_H
#define VALIDATE_H

#include <string>
#include "../Exceptions/Exceptions.h"
#include <iostream>
#include <sstream>

using namespace std;

class Validate {
	private:
	public:
		validate();
		void okName(const string& name) throw (InvalidNameException);
		void okSSN(const string& SSN) throw (InvalidSsnException);
		void okYear(const string& year) throw (InvalidYearException);
		void okSalary(const string& salary) throw (InvalidSalaryException);
		void okMonth(const string& month) throw (InvalidMonthException);


};

#endif
