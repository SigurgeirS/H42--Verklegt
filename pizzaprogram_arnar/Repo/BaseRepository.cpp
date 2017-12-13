#include "BaseRepository.h"

BaseRepository::baseRepository(){
	//constructor
}

void BaseRepository::fileBase(const Base& base){
	ofstream fout;
	fout.open("baselist.txt", ios::app);

	if(fout.is_open()){
		
		fout << base;

		fout.close();
	}else{
		//throw exception
	}
}

vector<Base> BaseRepository::fetchBases(){

	vector<Base> bases;
	ifstream fin;

	fin.open("baselist.txt");

	if(fin.is_open()){
		Base base;
		base.verbose = false;

		while(fin.good()){
			fin>>base;
			bases.push_back(base);
		}

		fin.close();
		bases.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return bases;
}
	
