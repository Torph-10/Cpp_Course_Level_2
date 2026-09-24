#pragma once

#include <iostream>
using namespace std;

namespace MyLib
{
	int read_number()
	{
		int number = 0;

		cout << "Please Enter a Number ?\n";
		cin >> number;
		return number;
	}

	void print_array_elements(int arr[100], int arr_length)
	{
		int i = 0;
		while (i < arr_length)
		{
			cout << arr[i] << " \n";
			i++;
		}
	}
	bool is_prime_number(int number)
	{
		int i = 2;
		while (i < number)
		{
			if (number % i == 0)
				return false;
			i++;
		}
		return true;
	}
}