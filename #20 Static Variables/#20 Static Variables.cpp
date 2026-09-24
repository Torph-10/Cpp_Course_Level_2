#include <iostream>

using namespace std;

void func()
{
	static int number = 1; // static variable : variable that store value all time programe (life time) work tell the end of programe.
	cout << "Value of Number : " << number << endl;
	number++;
}
int main()
{
	func();
	func();
	func();

	return 0;
}