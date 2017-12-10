#include "Validate.h"

Validate::validate(){
	//constructor
};

void Validate::okName(const string& name) throw (InvalidNameException){
	//Checks if name contains anything other than letters and spaces.
	for(int i = 0; i < name.size(); i++){
		if(!isalpha(name[i]) && !isspace(name[i])){
			//throws class Exception if invalid input is found
			throw InvalidNameException();
		}
	}
}

void Validate::okSSN(const string& SSN) throw (InvalidSsnException){
	//Throws exception if SSN is not the right size
	if(SSN.size() != 10){
		throw InvalidSsnException();
	}
	//Throws exception if SSN contains anything but digits
	for(int i = 0; i < SSN.size(); i++){
		if(!isdigit(SSN[i])){
			throw InvalidSsnException();
		}
	}
}

void Validate::okYear(const string& year) throw (InvalidYearException){
	int c = 0;
	//Checks if year is a number
	for(int i = 0; i < year.size(); i++){
		if(!isdigit(year[i])){
			throw InvalidYearException();
		}
		c++;
	}
	//if year is a number longer than 3 digits 
	//then check if it is a valid year (1900 - 2017)
	//if none of the above, throw exception
	if (c >= 4){
		int y;
		istringstream (year) >> y;
		if(y > 2017 || y < 1900){
			throw InvalidYearException();
		}
	}else{
		throw InvalidYearException();
	}
}

void Validate::okSalary(const string& salary) throw (InvalidSalaryException){
	bool isnum = true;
	for(int i = 0; i < salary.size(); i++){
		if(!isdigit(salary[i])){
			throw InvalidSalaryException();
			isnum = false;
		}
	}

	if(isnum == true){
		int s;
		istringstream (salary) >> s;
		
		if(s < 0 || s > 20000000){
			throw InvalidSalaryException();
		}
	}
}

void Validate::okMonth(const string& month) throw (InvalidMonthException){
	bool isnum = true;
	for(int i = 0; i < month.size(); i++){
		if(!isdigit(month[i])){
			throw InvalidMonthException();
			isnum = false;
		}
	}

	if(isnum == true){
		int m;
		istringstream (month) >> m;
		
		if(m <= 0 || m > 12){
			throw InvalidMonthException();
		}
	}
}




int main(){
	Validate val;
	string str;
	cin>>str;
	try{
	val.okMonth(str);
	}
	catch(InvalidNameException){
		cout<< "Invalid input in Name"<<endl;
	}
	catch(InvalidSsnException){
		cout<<"Invalid input in SSN"<<endl;
	}
	catch(InvalidYearException){
		cout<<"Invalid input in Year"<<endl;
	}
	catch(InvalidSalaryException){
		cout<<"Invalid input in Salary"<<endl;
	}
	catch(InvalidMonthException){
		cout<<"Invalid input in Month"<<endl;
	}
	cout<<"All good"<<endl;
	
	return 0;
}
