#include "Person.h"


Person::Person()
{
	name = "non name";
}

Person::Person(const string& nm)
{
	name = nm;
}

void Person::setName(const string& nm )
{
	name = nm;
}

string Person::getName()
{
	return name;
}
ostream& operator<<(ostream& out, const Person& per)
{
	cout << per.name;
	return out;
}
