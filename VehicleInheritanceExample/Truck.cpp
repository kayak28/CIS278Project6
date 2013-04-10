#include "Truck.h"

Truck::Truck()
{
	towPackage = false; 
	bedsize = -1;
}

Truck::Truck(string man, bool istow):towPackage(istow)
{
	towPackage = setManu(man);
	bedsize = 500;
}


Truck::Truck(string man, int esize):Vehicle()
{
	towPackage = true;
	bedsize =250;
}

 
Truck::Truck(string man, int esize, int iyear, int bsz, bool tow):Vehicle(),bedsize(bsz),towPackage(tow)
{
	//towPackage = bsz;
	//bedsize = tow;
	setYear(iyear);
	setEng(esize);
	setManu(man);
	Person p("nonae");
	setOwner(p);
	setCost(BASE);
}	
void Truck::bedsze(int size)
{
	bedsize = size;
}

bool Truck::getBed()
{
	return bedsize;
}

bool Truck::getTow()
{
	return towPackage;
}

void Truck::tow(bool isTow)
{
	towPackage = isTow;
}
double Truck::regCost() const
{
	return Vehicle::regCost() + 10;
}
void Truck::display(ostream& out)const
{
	Vehicle::display((out);//like super.display, display all common data with super class Vehicle 
	if(towPackage)
	{
		out << "there is a tow package.\n";
	}
	else
	{
		out << "No tow package." << towPackage;
	}
	out << "Bedsize: " << bedsize << "\n";
}
int Truck::warrantYears()
{
	if(regCost() > 4000)
	{
		return 2;
	}
	else if(regCost() > 2000)
	{
		return 1;
	}
	return 0;
}




