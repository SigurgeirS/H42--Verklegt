#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class superhero {
	public:
		string name;
	private: 
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
	
	//create a vector with size 0 of class superhero;
	vector<superhero> supers;
	char cont;
	//Ask the user if he wants to record a superhero.
	cout<<"Do you want to record a superhero? (y/n)"<<endl;
	cin>>cont;
	int c = 0;
	
	if (cont == 'y') {
			
		//while loop that lets the user record as many superheroes as he wants.
		while (cont == 'y'){
			superhero s;
			supers.push_back(s);
			cin>>supers[c];
			cout<<endl;
			cout<<"Do you want to record another hero? (y/n)"<<endl;
			cin>>cont;
			cout<<endl;
			c++;
		};
		ofstream fout;
		
		fout.open("binarySuperhero.dat", ios::out | ios::binary | ios::app);
		
		//fout.seekp (0, fout.end);
		
		fout.write((char*) &supers, sizeof(superhero) * c);
		cout << "Writing superhero to file" << endl;
		fout.close();
	}
	ifstream fin;
	vector<superhero> supers2;
	int length = 0;
	fin.open("binarySuperhero.dat", ios::in | ios::binary);
	if(fin.is_open()){
		fin.seekg (0, fin.end);
		cout << "Opening file for read" << endl;
		length = fin.tellg() / sizeof(superhero);
		fin.seekg(0, fin.beg);
		
		superhero* heroes = new superhero[length];
				
		cout << "length: " << length << endl;
				
		fin.read((char*) &heroes, sizeof(superhero) * length);
		cout << "About to close the file" << endl;
		fin.close();
		
		int i = 0;
		while(i < length){
			//cout<<supers2.size()<<endl;
			//cout<<supers2[i];
			cout<< heroes[i].name << endl;
			i++;
		}
	}else{
		cout<<"Could not open file"<<endl;
	};

	

	return 0;
}	