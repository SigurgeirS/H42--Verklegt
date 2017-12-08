#ifndef SIDES_H
#define SIDES_H
#include<string>
#include<iostream>

using namespace std;

class Sides{
	private:
		string ID;
		string name;
		double price;
	public:
		Sides();
		string getID();
		string getName();
		double getPrice();

		friend ostream& operator << (ostream& out, const Sides& side);
		friend istream& operator >> (istream& in, Sides& side);
};

#endif
