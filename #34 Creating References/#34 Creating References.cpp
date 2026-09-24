#include <iostream>

using namespace std;


int main()
{
	int a = 10;
	int &x = a; // this mean go to this address and give the var another name, that we can use it to call it.
	int& j = x;

	cout << &a << endl;
	cout << &x << endl;
	cout << &j << endl;

	j = 9090;

	cout << a << endl;
	cout << x << endl;
	cout << j << endl;

	return 0;
}