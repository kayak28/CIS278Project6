#include "IntList.h"

IntList::IntList()
{
	data = new int [10];
	cap = 10;
	howmany = 0;
}

IntList::IntList(int capacity)
{
	data = new int [capacity];
	cap = capacity;
	howmany = 0;
}

IntList::IntList(const IntList& obj)
{//copy constructor 
	cout << "in copy constructor\n";
	howmany = obj.howmany; 
	cap = obj.cap;
	data = new int [cap];
	for(int i = 0; i < howmany; i++)
	{
		data[i] = obj.data[i];
	}
//Look like a clone() in java.
//make a current condtion of array's copy
}

int IntList::lengthIs()
{
	//return current array length, NOT actual length of array
	return howmany;
}

void IntList::add(int value)
{
	if(isFull())
	{//if array is full
		int* temp = new int[cap * 2];
		//Like ensureCapacity(), allocate doubled size of array
		for(int i = 0; i < howmany; i++)
		{//copy all data in data[] 
			temp[i] = data[i];
		}
		delete[] data;//(guess) relese memoty that data have taken
		data = temp;
		cap = cap * 2; //why not does it execute right after if-statement?? 
	}
	//add; howmany holds the max index that are used,
	// so add value into howmany-th in index and increment hommany,
	// prepare for the next addtion 
	data[howmany] = value;
	howmany++;

}//add
//precondtion--value is in the list
void IntList::deleteItem(int value)
{
	int index = 0;	
	while(index < howmany && data[index] != value)
	{
		index++;
	}
	//case1  if((index < howmany => T) && (data[index] != value => F)
	/*equal to data[index] == value*/
	// ==> threr is "value" while index < howmany 

	//case2 if((index < howmany => F) && (data[index] != value => T)
	/*index eventually reaches howmany, that indedicates data[] does not contain value*/
	
	if(index < howmany)
	{//case 1 
		for(int i = index+1; i <= howmany; i++)
		{//all data, stored after index-th(where value is stored), move one forward 
			data[i - 1] = data[i];
		}
		howmany--;
	}
}//delete

bool IntList::isThere(int value)
{
	int index = 0;
	while(index < howmany && data[index] != value)
	{
		index++;
	}
	return (index < howmany); 
	//if true, there is value at index-th; 
	//otherwise index reasches howmany before finding value
}
bool IntList::isFull()
{
	return (howmany == cap);
}
bool IntList::isEmpty()
{
	return (howmany == 0);
}
int& IntList::operator[](int index)
{
	return data[index];
}

IntList IntList::operator+(IntList obj)
{
	IntList temp(cap + obj.cap);//allocate temp array
	temp.howmany = howmany + obj.howmany;
	for(int i = 0; i < howmany; i++)
	{
		temp[i] = data[i];
	}
	int targetIndex = howmany;
	for(int j = 0; j < obj.howmany; j++)
	{
		temp[targetIndex] = obj.data[j];
		targetIndex++; 
	}
	return temp;
}

ostream& operator<<(ostream& out, const IntList& obj)
{
	out << "[";
	for(int i = 0; i < obj.howmany; i++)
	{
		out << obj.data[i] << " ";
	}
	out << "]";
	return out;
}
/*
IntList& IntList::operator=(const IntList& obj)
{
	if(this != &obj)
	{
		howmany = obj.howmany;
		cap = obj.cap;
		delete[] data;
		data = new int[cap];
		for(int i = 0; i < howmany; i++)
		{
			data[i] = obj.data[i];
		}
		return *this;
	}
}
*/


IntList::~IntList()
{
	delete [] data;
}
