#ifndef VALIDATE_H
#define VALIDATE_H

#include <string>
#include "../Exceptions/InvalidNameException.h"
#include "../Exceptions/InvalidSsnException.h"
#include "../Exceptions/InvalidYearException.h"
#include "../Exceptions/InvalidSalaryException.h"
#include "../Exceptions/InvalidMonthException.h"
#include <iostream>
#include <sstream>

using namespace std;

class Validate {
	private:
	public:
		Validate();
		void okName(const string& name) throw (InvalidNameException);
		void okSSN(const string& SSN) throw (InvalidSsnException);
		void okYear(const string& year) throw (InvalidYearException);
		void okSalary(const string& salary) throw (InvalidSalaryException);
		void okMonth(const string& month) throw (InvalidMonthException);


};

#endif
