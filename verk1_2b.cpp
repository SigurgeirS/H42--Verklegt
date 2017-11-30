#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdio.h>
using namespace std;

class superhero {
		char name[50];
		int age;
		char power;
		bool verbose;
public:
	superhero();
	superhero(char n[50], int a, char o);
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
	name[50] = '\0';
	age = 0;
	power = 'n';
	verbose = true;
};

superhero::superhero (char n[50], int a, char o){
	strcpy(name,n);
	name[50] = '\0';
	age = a;
	power = o;
}

void superhero::setVerbose(bool b){
	verbose = b;
};

int main(){
	
	//create a vector with size 0 of class superhero;
	//vector<superhero> supers;
	cout<<"How many superheros do you want to record? "<<endl;
	int numb = 0;
	cin>>numb;
	superhero* heroes1 = new superhero[numb];
	char cont;
	//Ask the user if he wants to record a superhero.
	//cout<<"Do you want to record a superhero? (y/n)"<<endl;
	//cin>>cont;
	int c = 0;
	
	if (numb > 0) {
			
		//while loop that lets the user record as many superheroes as he wants.
		while (c < numb){
			cin>>heroes1[c];
			cout<<endl;
			c++;
		};
		cout<<heroes1[0]<<endl;
		ofstream fout;
		
		fout.open("binarySuperhero.dat", ios::binary | ios::app);
		
		//fout.seekp (0, fout.end);
		
		fout.write((char*) heroes1, sizeof(superhero) * c);
		cout << "Writing superhero to file" << endl;
		fout.close();
	}
	
	delete [] heroes1;
	
	ifstream fin;	
	int length = 0;
	fin.open("binarySuperhero.dat", ios::binary);
	if(fin.is_open()){
		fin.seekg (0, fin.end);
		length = fin.tellg() / sizeof(superhero);
		fin.seekg(0, fin.beg);
		superhero* heroes2 = new superhero[length];		
				
		fin.read((char*) heroes2, sizeof(superhero) * length);
		fin.close();
		
		int i = 0;
		while(i < length){
			cout<< heroes2[i]<< endl;
			i++;
		}
		delete [] heroes2;
		
	}else{
		cout<<"Could not open file"<<endl;
	};
	

	return 0;
}	