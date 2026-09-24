#include <iostream>

using namespace std;

void funct(int &a) // call by refr mean go to the address give a variable another name but still the same variable that send from main funct
{
	a++;
}
int main()
{
	int x = 10;
	funct(x);
	cout << x << endl;

	return 0;
}