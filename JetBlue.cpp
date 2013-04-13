#include<iostream>
#include"JetBlue.h"
using namespace std;

JetBlue::JetBlue()
{
	//nothing to do since there is no new variables
}

JetBlue::JetBlue(int capacity):PlaneFlight(int capacity) 
{
	//Nothing to do since there is no new variables
}

int JetBlue::seatLeft()const
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
			return true;
		}
		else
		{
			return false;
		}
	}
}


int JetBlue::furthesrRear()const
{
	for(int i = this->getCapacity(); i >= 0; i--)
	{
		if(seatVacant(i))
		{
			return true;	
		}
		else
		{
			return false;
		}
	}
 
}


