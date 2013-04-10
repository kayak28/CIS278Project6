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

	return seats[seatNo] == 0;
}

/*effect: reserve the seat numbered seatNo 
*return:NO
*precondtion- seatNo is valid
*/
void PlaneFlight::reserveSeats(int seatNo)
{
	seats[seatNo] = 1;
}

/*effect: cancel(unreserve) a seat numbered seatNo
*return: no
*precondtion- seatNo is valid
*postcondtion- seatNo is now available
*/
void PlaneFlight::cancelSeat(int seatNo)
{
	seats[seatNo] = 0;
}

/*effect: determine if seatNo is a valid number or not
*return true if seatNo is a valid number; otherwise false 
*/
bool PlaneFlight::validSeatNum(int seatNo)const
{
	return seatNo >= 0 && seatNo < SIZE;
}





