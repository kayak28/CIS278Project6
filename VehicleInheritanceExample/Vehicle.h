//used to store vehicle info for Johnny's Car consigment 
//owner leaves car w/ Johnny, he sells it for 10% more than owner wants 

#include <string>
using namespace std;
#include "Person.h"
#ifndef VH
#define VH

const int BASE = 500;//minimal vehicle owner price 

class Vehicle
{
	public:
		Vehicle();
		Vehicle(const string& manu, int esize, const Person& owns);
		
		void setManu(string manu);
		void setEng(int esize);
		void setYear(int a year);
		void setCost(double ownercost);
		
		string getManu() const;
		int getSize() const;
		Person getOwner(const Person& owns);
		int getYear()const;
		
		Virtual double regCost()const;
		//return purchase orice that owner want 
		double totalCost() const;
		//return price Johnny will sell car for
		void display(ostream& out)const;
		Virtual int warrnatYears() = 0;
		
	private: 
		//car details
		string manufacturer;
		int engine;
		Person owner;
		int year;
		double desiredPrice;// price owner wants for car
};
#endif
