#include"salaUI.h"

salaUI::salaUI(){
	//constructor
}

void salaUI::startUI(){
	cout<<"Chose an option: "<<endl;
	cout<<"(a) Create new order"<<endl;
	cout<<"(b) Modify existing order"<<endl;
	cout<<"(q) Quit to main menu"<<endl;
	char option;
	cin>>option;
	if(option == 'a'){
		cout<<"Creating order"<<endl;
		order newOrder;
		cin>>newOrder;
	}else if(option == 'b'){
		cout<<"Specify what order you want to modify"<<endl;
		//call domain class for modifying order
	}else if(option == 'q'){
		//Go back to main menu	
	};
}

int main(){
	salaUI sala;
	sala.startUI();
	return 0;
};
