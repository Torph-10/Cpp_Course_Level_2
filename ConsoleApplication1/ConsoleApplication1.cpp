#include <iostream>
#include "MyLib.h";

using namespace std;
void print(int arr[100], int x)
{
	MyLib::print_array_elements(arr, x);
}
int main()
{

	int arr[8] = { 10,20,30,40,50,60,70,80 };
	print(arr, 8);  //test library in fucntion

	if (MyLib::is_prime_number(9))
		cout << "\n\nPrime\n";
	else
		cout << "Not Prime\n";
	return 0;
}