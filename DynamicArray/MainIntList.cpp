#include "IntList.h"

int main()
{
	IntList l1(15);//activate constructor with one int args
	l1.add(55);
	l1.add(5);
	l1.add(45);
	l1.add(33);
	l1.add(123);
	l1.add(44);
	l1.add(387);
	l1.add(0);
	l1.add(9093);

	IntList l2;//activate constructor with no args
	l2.add(12);
	l2.add(66);
	l2.add(45);
	l2.add(100);
	
	cout << "list 1 contains" << l1 << "\n";
	cout << "list 2 contains" << l2 << "\n";

	l2.deleteItem(66);
	cout << "after deletion list: " << l1 << "\n"; 
	cout << "list 2 contains" << l2 << "\n";
	
	return 0;

}
