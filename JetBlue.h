#include"PlaneFlight.h"

class JetBlue:public PlaneFlight
{
	public: 
		JetBlue();
		JetBlue(int capacity);
		
		int seatsLeft() const;
		int furthestFront() const;
		int furthestRear() const;
			

};
