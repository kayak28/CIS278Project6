#include<string>
#include<iostream>
using namespace std;

#ifndef PERS
#define PERS

class Person 
{
	public:
		Person();
		Person(const string& name);
		coid setName(const string& name);
		String getName();
		friend ostream& operator<<(ostream& out, const Person& per);

	private: 
		string name;
};
#endif 
