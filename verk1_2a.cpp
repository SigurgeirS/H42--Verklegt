#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class superhero {
	string name;
	int age;
	char power;
	bool verbose;
public:
	superhero();
	superhero(string n, int a, char o);
	void printvalues(void);
	void setVerbose(bool b);
	friend istream& operator >> (istream& in, superhero& sup){
		if(sup.verbose){
		cout<<"Name: ";
		};
		in>>sup.name;
		if(sup.verbose){
		cout<<"Age: ";
		};
		in>>sup.age;
		if(sup.verbose){
		cout<<"Power: ";
		};
		in>>sup.power;
		return in;
	};
	friend ostream& operator << (ostream& out, const superhero& sup){
		if(sup.verbose){
		out<<"Name: ";
		};
		out<<sup.name<<endl;
		if(sup.verbose){
		out<<"Age: ";
		};
		out<<sup.age<<endl;
		if(sup.verbose){
		out<<"Power: ";
		};
		out<<sup.power<<endl;
		return out;
	};
};


superhero::superhero (void){
	name = "";
	age = 0;
	power = 'n';
	verbose = true;
};

superhero::superhero (string n, int a, char o){
	name = n;
	age = a;
	power = o;
}

void superhero::setVerbose(bool b){
	verbose = b;
};



int main(){

  superhero super;
  super.setVerbose(true);
  cout << "Hello" << endl;
  cin >> super;

  super.setVerbose(false);
  ofstream ofs;
  ofs.open("test1_2a.txt");
  //ofs.write((char*)(&super), sizeof(superhero));
  
  ofs << super;
 
}
