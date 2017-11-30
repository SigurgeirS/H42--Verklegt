#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class superhero {

 public:
  string name;
	int age;
	char power;
	bool verbose;
public:
	superhero();
	superhero(string n, int a, char o);
	void printvalues(void);
	void setVerbose(bool b);
        void setPower(char super);
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
		out<< sup.age<< endl;
		if(sup.verbose){
		out<<"Power: ";
		};
		out<< sup.power<<endl;        
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


string printPower(char n){
        switch(n) {
          case 'f': return "Flying";
            break;
          case 'g': return "Giant";
            break;
          case 'h': return "Hacker";
            break;
          case 'n': return  "None";
            break;
          default:  return "Weakling";
            break;
        }
}


int main(){ 

  int a = 0;
  string b;
  

  

  while (a == 0) {
    cout << "\nPress -> \n(a) to add a new superhero \n(p) print list \n(q) quit \n" << endl;
    //cout << "\n";
    cin >> b;
    
    if(b == "q" || b == "Q"){
      a = 1;
    } else if (b == "a" || b == "A"){
      superhero super;
      super.setVerbose(true);
      cin >> super;
      
      super.setVerbose(false);
      ofstream ofs;
      ofs.open("test1_2a.txt", ofstream::app | ofstream::out);
      ofs << super << "\n";
      ofs.close();
      cout << "\nSuperhero added!! \n";

    } else if( b == "p" || b == "P"){

      vector<superhero> SuperV;
     
      ifstream ifs;
      ifs.open(("test1_2a.txt"));

      if (!ifs) {
        cerr << "Error in opening the file" << endl;
        return 1; // if this is main
      }
      superhero tmp;
      while(ifs >> tmp.name >> tmp.age >> tmp.power){
        SuperV.push_back(tmp);
      }

      
      for ( int i=0; i < SuperV.size(); i++){
        cout << SuperV[i].name << " (" << SuperV[i].age << ") :" << printPower(SuperV[i].power) << endl;
      }

      SuperV.clear();
      
    
    } else {

      cout << "\n Please select again \n\n";
    }
    
  }

  return 0;
 }
