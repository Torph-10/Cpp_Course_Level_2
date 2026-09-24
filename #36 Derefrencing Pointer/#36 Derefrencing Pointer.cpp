#include <iostream>

using namespace std;

int *func(int* d) // pointers work with function also. ssssss
{
	*d += 90; // this called derefrence, cuz the pointer have the acces to the value of the and change it.
	return d;
}

int main()
{
	int i = 10;
	cout << *func(&i); 

	return 0;
}