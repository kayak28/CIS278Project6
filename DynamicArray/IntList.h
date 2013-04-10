#include<iostream>
#include<ostream>
using namespace std;

class IntList
{
	private: 
		int* data;
		int cap;//capacity of array
		int howmany;//number of ints currently in the list
	public:
		IntList();
		IntList(int capacity);
		IntList(const IntList& obj);//copy constructor

		~IntList();

		void add(int value);
		bool isThere(int value);
		int lengthIs();
		bool isFull();
		bool isEmpty();

		void deleteItem(int value);
		int& operator[](int index);
		IntList operator+(IntList obj);
		//IntList& operator=(const IntList& pbj);
		friend ostream& operator<<(ostream& out, const IntList& obj);
};//class
