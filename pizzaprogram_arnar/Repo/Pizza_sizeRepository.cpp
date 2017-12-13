#include "Pizza_sizeRepository.h"

Pizza_sizeRepository::Pizza_sizeRepository(){
	//constructor
}

void Pizza_sizeRepository::storeSize(const Pizza_size& size)
{
    ofstream fout;
    fout.open("sizelist.txt",ios::app);
    if(fout.is_open()){

   	fout << size;

    	fout.close();
    }else{
	    //throw exception
    }
}

vector<Pizza_size> Pizza_sizeRepository::fetchSize()
{
	vector<Pizza_size> sizes;
	ifstream fin;

	fin.open("sizelist.txt");

	if(fin.is_open()){
		Pizza_size size;
		size.verbose = false;
		while(fin.good()){
			fin>>size;
			sizes.push_back(size);
		}
		fin.close();
		sizes.pop_back();
	}else{
		cout<<"could not open file"<<endl;
	}
	return sizes;
}
