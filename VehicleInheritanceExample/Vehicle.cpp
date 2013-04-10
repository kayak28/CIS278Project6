#include "Vehicle.h"

Vehicle::Vehicle()
{
	manufacturer = "manu not known";
	engine = -1;
	Person P("IGGY");
	owner = p;
	desiredPrice = BASE;
	year = 1800;
}

Vehicle::Vehicle(const string& manu, int esize, const Person& owns)
{
	manufacturer = manu;
	engine = esize;
	owner = owns;
	year = 1800;
	desiredPrice = BASE;
}
//mutator functions 
void Vehicle::setManu(string manu)
{
	manufacturer = manu;
}

void Vehicle::setEng(int esize)
{
	engine = esize;
}

void Vehicle::setCost(double ownercost)
{
	desiredPrice = ownerCost;
}

void Vehicle::setOwner(const Person& owns)
{
	owner = owns;
}
void Vehicle::setYear(int ayear)
{
	year = ayear;
}

string Vehicle::getManu()const
{
	return manufacturer;
}

int Vehicle::getSize()const
{
	return engine;
}

double Vehicle::regCost()const
{
	return desiredPrice;
}

double Vehicle::totalCost()const
{
	return regCost() + regCost() * 0.10;
}
Person Vehicle::getOwner() const
{
	return owner;
}
int Vehicle::getYear() const
{
	return year;
}
void Vehicle::display(ostream& out)const
{
	out << "\nVehicle manufacture---" << manufacturer <<
	       "\nYear---" << year <<
	       "\nEngine size ---" << engine << "\nOwner---" <<< owner <<
	       "\nPrice to buyer $" << totalCost() << 
	       "\nOwner desired price $" <<regCost() << "\n";

}
