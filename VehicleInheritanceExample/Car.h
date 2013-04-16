#include "Vehicle.h"

class Car:public Vehicle 
{
	private: 
		int doors;
	public: 
		Car();
		Car(string m, int d);
		Car(string m, int e, Person p, ind d);
		
		int getDoors();
		void setDoors(int);
		
		int warrantYears();
};

