//PlaneFlight.h

#include<iostream>
using namespace std;//without this line, error: ostream does not name a type 
class PlaneFlight
{
	public:
		PlaneFlight();
		PlaneFlight(int capacity);//added
		PlaneFlight(const PlaneFlight& obj);//added copy constructor
	
		~PlaneFlight();
		
		bool isFull() const;
		bool isEmpty() const;
		bool seatVacant(int seatNo)const;
		void reserveSeat(int seatNo);
		void cancelSeat(int seatNo);
		bool validSeatNum(int seatNo)const;
		friend ostream &operator<<(ostream &out, const PlaneFlight& obj);
		PlaneFlight& operator=(const PlaneFlight& obj);
		int getCapacity()const;
		int getCount()const;
	private: 
		int* seats;//[;ame seats(0-empry; 1-full)
		int count;//number of reservation made
		int cap;
		static const int SIZE = 10;
};//class




