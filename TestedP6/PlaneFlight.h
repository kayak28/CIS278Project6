const int SIZE = 10;

class PlaneFlight{

public:
	PlaneFlight();

	bool isFull() const;
    // Effect:  determines if all plane seats are full
    // Postcondition:  this PlaneFlight objects is unchanged
    // Returns: true if all seats are full, false otherwise

  bool isEmpty () const;
    // Effect:  determines if all plane seats are empty
    // Postcondition:  this PlaneFlight objects is unchanged
    // Returns: true if all seats are empty, false otherwise


  bool seatVacant(int seatNo) const;
     // Effect:  determines if seatNo is an available seat
     // Precondition:   seatNo is a valid seat number
     // Postcondition:  this PlaneFlight object is unchanged
       
    void reserveSeat(int seatNo);
     // Effect: reserves the seat numbered ?seatNo?
     // Precondition:  seat is vacant
     // Postcondition:  seat #seatNo is now filled   

    void cancelSeat(int seatNo);
      //Effect: unreserves the seat numbered ?seatNo?
      // Precondition:  seat had been reserved
     // Postcondition:  seat #seatNo is now available      

   bool validSeatNum(int seatNo)  const;
      //Effect:  determines if seatNo is a valid number for this plane
      // Postcondition:  this PlaneFlight object is unchanged
      //Returns: true if seatNo is a seat on this plane, false otherwise
  
private:
	  int* seats;    //plane seats (0- empty, 1 - full)
	  int count;     //number of reservations made
};

