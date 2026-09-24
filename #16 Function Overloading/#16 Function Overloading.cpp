#include <iostream>

using namespace std;

int MySum(int a, int b)
{
	return (a + b);
}

int MySum(int a, int b, int c)
{
	return (a + b + c);
}

float MySum(float a, float b)
{
	return (a+b);
}

double MySum(double a, double b)
{
	return (a + b);
}

int main()
{
	cout << MySum(1.2, 3.67); // will go to double function cuz compiler in c++ automaticlly choose double 
	cout << MySum (3.00f, 1.00f); // for to make it clear for the compiler should defintion the value with prfixe 'f' 
	cout << MySum (1, 3);
	cout << MySum(8, 7, 9);

	return 0;
}