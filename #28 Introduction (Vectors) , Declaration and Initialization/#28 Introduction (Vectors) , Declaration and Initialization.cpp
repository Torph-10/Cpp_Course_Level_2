#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vnumber = { 10, 20, 30, 40, 50 };

	for (int number : vnumber) // this way copie the values from var vnumber to number and then print it, and this method is take time and memory.
		cout << number << " ";

	cout << "\n\n";

	for (int& num : vnumber) // the var num don't store the values of vnumber, its take the adress and go to adress and print the value.
		cout << num << " ";

	return 0;
}