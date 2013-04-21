#include "PlaneFlight.h"

PlaneFlight::PlaneFlight() {
     seats = new int[SIZE];
	 count = 0;
	                  // initialize all seats to empty
	 for (int num = 0; num < SIZE; num++)
		 seats[num] = 0;
}
bool PlaneFlight::isFull() const{
     //Effect:  determines if all plane seats are full
     //Postcondition:  this PlaneFlight objects is unchanged
     //Returns: true if all seats are full, false otherwise

     return count == SIZE;
}

bool PlaneFlight::isEmpty () const{
     //Effect:  determines if all plane seats are empty
     //Postcondition:  this PlaneFlight objects is unchanged
     //Returns: true if all seats are empty, false otherwise
       
     return count == 0;
}


bool PlaneFlight::seatVacant(int seatNo) const{
     // Effect:  determines if seatNo is an available seat
     // Precondition:   seatNo is a valid seat number
     // Postcondition:  this PlaneFlight object is unchanged 

	  return seats[seatNo] == 0;
					  
}


void PlaneFlight::reserveSeat(int seatNo)  {
     // Effect: reserves the seat numbered ?seatNo?
     // Precondition:  seat number is valid and seat is vacant
     // Postcondition:  seat #seatNo is now filled

	  seats[seatNo] = 1;
}

void PlaneFlight::cancelSeat(int seatNo){
      //Effect: unreserves the seat numbered ?seatNo?
     // Precondition:  seat number is valid and  had been reserved
     // Postcondition:  seat #seatNo is now available 
					    
	  seats[seatNo] = 0;
}

bool PlaneFlight::validSeatNum(int seatNo)  const  {
     // Effect:  determines if seatNo is a valid number for this plane
     // Postcondition:  this PlaneFlight object is unchanged
     // Returns: true if seatNo is a seat on this plane, false otherwise
   
	  return seatNo >= 0 && seatNo < SIZE;
}
  

