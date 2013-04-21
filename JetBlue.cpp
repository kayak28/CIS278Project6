#include<iostream>
#include"JetBlue.h"
using namespace std;

JetBlue::JetBlue()
{
	cout << "no arg const";
	//nothing to do since there is no new variables
}

JetBlue::JetBlue(int capacity):PlaneFlight(capacity) 
{
	//cout << "one arg const";
	//Nothing to do since there is no new variables
}

int JetBlue::seatsLeft()const
{
	int left = 0;
	left = this->getCapacity() - this->getCount();
	return left;  
	
}

int JetBlue::furthestFront()const
{
	for(int i = 0; i < this->getCapacity(); i++)
	{
		if(seatVacant(i))
		{
			return i;
		}
	}
}


int JetBlue::furthestRear()const
{
	for(int i = this->getCapacity() - 1; i >= 0; i--)
	{
		if(seatVacant(i))
		{ 
			cout << "i = " << i << "\n";
			return i;	
		}
	}
 
}


