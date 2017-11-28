#include <iostream>
#include <string>
using namespace std;

class superhero {
	string name;
	int age;
	char power;
public:
	superhero();
	superhero(string n, int a, char o);
	void printvalues(void);		
	friend istream& operator >> (istream& in, superhero& sup){
		cout<<"Name: ";
		in>>sup.name;
		cout<<"Age: ";
		in>>sup.age;
		cout<<"Power: ";
		in>>sup.power;
		return in;
	};
	friend ostream& operator << (ostream& out, const superhero& sup){
		out<<"Name: "<<sup.name<<endl;
		out<<"Age: "<<sup.age<<endl;
		out<<"Power: "<<sup.power<<endl;
	};
};



superhero::superhero (void){
	name = "";
	age = 0;
	power = 'n';
};

superhero::superhero (string n, int a, char o){
	name = n;
	age = a;
	power = o;
}

void superhero::printvalues(void){
	cout<<"name: "<<name<<endl<<"Age: "<<age<<endl<<"Power: "<<power<<endl;
};

int main(){
	cout<<"Hello"<<endl;
	superhero super;
	cin>>super;
	cout<<super;
	return 0;
}

