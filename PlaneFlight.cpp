#include<iostream>
#include"PlaneFlight.h"

using namespace std;

PlaneFlight::PlaneFlight()
{
	seats = new int[SIZE];
	count = 0;
	//initialize all seats to empty
	for(int index = 0; index < SIZE; index++)
	{
		seats[index] = 0;
	} 
}//PlaneFlight
//add one arg constructor 
PlaneFlight::PlaneFlight(int capacity)
{
	
	seats = new int[capacity];
	count = 0;
	cap = capacity;
	//initialize all seats to empty
	for(int index = 0; index < capacity; index++)
	{
		seats[index] = 0;
	} 
}



/*effect: determine if all seats are full
*returns: true if all seats are full. false otherwise 
*/
bool PlaneFlight::isFull() const
{	
	return count == SIZE;
}//isFull

/*effect: dertermine if all sears are empty
*return: true if all seats are empty; false otherwise
*/
bool PlaneFlight::isEmpty() const
{
	return count == 0;
}

/*effect: determine if seatNo is a avaiable seat or not
*return: true avaiable; otherwise false
*precondtion--seatNo is valid number
*/
bool PlaneFlight::seatVacant(int seatNo) const
{
	if(validSeatNum(seatNo))
	{
		if(seats[seatNo] == 0) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		cout << "invalid seatNo";
		return false;
	}

	return seats[seatNo] == 0;
}

/*effect: reserve the seat numbered seatNo 
*return:NO
*precondtion- seatNo is valid
*/
void PlaneFlight::reserveSeat(int seatNo)
{
	if(isFull())
	{
		int* temp = new int[cap * 2];
		for(int i = 0; i < cap -1; i++)
		{
			temp[i] = seats[i];
		}
		delete[] seats;
		seats = temp; 
		cap = cap*2;
	}
	seats[seatNo] = 1;
	count++;
}

/*effect: cancel(unreserve) a seat numbered seatNo
*return: no
*precondtion- seatNo is valid
*postcondtion- seatNo is now available
*/
void PlaneFlight::cancelSeat(int seatNo)
{
	int index = 0;
	while(index < count && seats[index] != seatNo)
	{
		index++;
	}
	if(index < count)
	{	
		seats[index] == 0;
		for(int i = index++; i <= index -1; i++)
		{
			seats[i - 1] = seats[i];
		}
		count--;
	}
}

/*effect: determine if seatNo is a valid number or not
*return true if seatNo is a valid number; otherwise false 
*/
bool PlaneFlight::validSeatNum(int seatNo)const
{
	return seatNo >= 0 && seatNo < SIZE;
}
/*
ostream& operator<<(ostream& out, const PlaneFlight)
{	
	out 

}
*/
PlaneFlight::~PlaneFlight()
{
	delete [] seats;
}
PlaneFlight& PlaneFlight::operator=(const PlaneFlight& obj)
{
	if(this != &obj)
	{
		count = obj.count;
		cap = obj.cap;
		delete[] seats;
		seats = new int[cap];
		for(int i = 0; i < count; i++)
		{
			seats[i] = obj.seats[i];
		}
		return *this;
	}
}
