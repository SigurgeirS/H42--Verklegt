#include "OrderUI.h"

OrderUI::OrderUI(){
	//constructor
}

void OrderUI::startUI(){
	char option;

	while(option != 'b'){
	system("CLS");
	cout<<"Chose an option"<<endl<<endl;
	cout<<"(a) Create new order"<<endl;
	cout<<"(b) Quit to main menu"<<endl;
	cin>>option;
	validateInput(option);
	}
	
}

void OrderUI::validateInput(char option){

	if(option == 'a'){
		order newOrder = createOrder();
		order_domain.addOrder(newOrder);
	}else if(option == 'b'){
		cout<<"Exiting to menu"<<endl;
		cout<<endl;
	}else{
		cout<<"Invalid input"<<endl;
		cout<<endl<<endl;
	}
}

order OrderUI::createOrder(){
	order newOrder;
	cin>>newOrder;
	return newOrder;
}

