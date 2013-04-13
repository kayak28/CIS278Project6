#include<iostream>
#include "PlaneFlight.h"
using namespace std;


int main()
{
	PlaneFlight p1(5);

	for(int i = 0; i < 7; i++)
	{
		if(p1.isEmpty())
		{
			cout << "empty\n";
			if(p1.seatVacant(i))
			{	
				cout << "valid\n";
			}
			else
			{
				cout << "invlid\n";
			}
		}
		else
		{
			cout << "not empty\n";
		}
	}
	for(int n = 0; n < 7; n++)
	{
		p1.reserveSeat(n);
	}
	
	p1.reserveSeat(1);
	if(p1.isFull())
	{
		cout << "full\n";
		cout << "cancelling\n";
		if(p1.seatVacant(3))
		{
			cout << "available\n";
		}
		else
		{
			cout << "not avaiable\n";
		}
	}
	else
	{
		cout << "empty\n";
	}


	if(p1.isEmpty())
	{
		cout << "empty\n";
	}
	else
	{
		cout << "not empty\n";
	}
	
	p1.cancelSeat(3);
	
	cout << "current seats";
	
	cout << p1; 
	
	
	
	return 0;
}
