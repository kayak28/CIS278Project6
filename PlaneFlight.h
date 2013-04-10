//PlaneFlight.h

const int SIZE = 10;

class PlaneFlight
{
	public:
		PlaneFlight();
		bool isFull() const;
		bool isEmpty() const;
		bool seatVacant(int seatNo)const;
		bool reserveSeat(int seatNo)const;
		void canselSeat(int seatNo);
		bool varidSeat(int seatNo)const;

	private: 
		int* seats;//[;ame seats(0-empry; 1-full)
		int count;//number of reservation made

};//class




