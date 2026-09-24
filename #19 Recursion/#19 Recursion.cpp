#include <iostream>
using namespace std;


int Recursion2(int Number, int power)
{
	int number = 1;
	if (power >= 0)
		number = Recursion2(Number, power - 1);
	return number;
}
int main()
{
	cout << Recursion2(2, 4);


	return 0;
}