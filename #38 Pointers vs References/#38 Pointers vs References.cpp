#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int& x = a; // in refrence you can't change it to another variable. 

	cout << &a << endl;
	cout << &x << endl;

	cout << a << endl;
	cout << x << endl;
	
	int* p = &a; 
	
	cout <<"x  = " << x << endl;
	cout << p << endl;
	cout << *p << endl;

	int b = 20;
	p = &b; // in pointer you can pointe to another variable.

	cout << p << endl;
	cout << *p << endl;
	cout << x;
	
	return 0;
}