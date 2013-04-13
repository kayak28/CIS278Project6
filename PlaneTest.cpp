#include<iostream>
#include "PlaneFlight.h"
using namespace std;


int main()
{
	PlaneFlight p1(5);

	for(int i = 0; i < 7; i++)
	{
		if(p1.validSeatNum(i))
		{	
			cout << "valid\n";
		}
		else
		{
			cout << "invlid\n";
		}
	}
	return 0;
}
