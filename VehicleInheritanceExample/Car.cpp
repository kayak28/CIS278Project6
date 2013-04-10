#include "Car.h"
int Car::getDoors()
{
	return doors;
}
int Car::setDoors(int n)
{
	doors = n;
}

Car::Car()
{
	doors = 4;	
	setManu("ford");//from Vehicle
	setEng(2);
	Person temp("Jon");
	setOwner(temp); 
}

Car::Car(string m, int d)
{
	setManu(m);
	doors = d;
}

Car::Car(string m, int e, Person p, int d):Vehicle(m,e,p)
{
	doors = d;
}
int Car::warrantYears()
{
	if(regCost() > 4000)
	{
		return 1;
	}
	return 0;
}
