#include <iostream>
#include <string>
#include <fstream>
#include <vector>
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
    superhero Superhero;
    cin >> Superhero;
    ofstream fout;
    fout.open("binarySuperhero.dat",ios::binary);
    fout << Superhero;
    fout.close();
   ifstream fin;
    superhero Superhero2;
    fin.open("binarySuperhero.dat",ios::binary);
     if(fin.is_open()){
        fin.seekg(0,fin.end);
        int recordCount = fin.tellg() / sizeof(superhero);
        fin.seekg(0, fin.beg);
        for(int i = 0; i < recordCount; i++){
            fin.read((char*)(&Superhero2), sizeof(superhero));
            cout << Superhero2 << endl;
        }
     }
     else{
        cout << "Can't read file!" << endl;
     }
     fin.close();


    //fin.close();
	/*//create a vector with size 0 of class superhero;
	vector<superhero> supers;
	char cont;
	//Ask the user if he wants to record a superhero.
	cout<<"Do you want to record a superhero? (y/n)"<<endl;
	cin>>cont;
	int c = 0;
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

	fout.open("binarySuperhero.dat", ios::binary | ios::app);
	fout.seekp (0, fout.end);
	fout.write((char*)(&supers), sizeof(superhero));
	fout.close();

	ifstream fin;
	vector<superhero> supers2;
	//SEGMENTATION FAULT!!!!! vantar sennilega '\0'
	fin.open("binarySuperhero.dat", ios::binary );
	if(fin.is_open()){
		fin.seekg (0, fin.end);
		int length = fin.tellg();
		fin.seekg(0, fin.beg);
		fin.read((char*) (&supers2), length);
		fin.close();
		int i = 0;
		while(i<c){
		cout<<supers2[0];
		cout<<endl;
		i++;
	};
	}else{
		cout<<"Could not open file"<<endl;
	};*/


	return 0;
}
