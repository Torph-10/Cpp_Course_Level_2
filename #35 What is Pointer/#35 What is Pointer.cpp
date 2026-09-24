#include <iostream>

using namespace std;

int main()
{
	int i = 90;
	int* f = &i; // Pointer is  a variable or container that store address that already existe.

	cout << &i << endl;
	cout << f << endl;

	return 0;
}