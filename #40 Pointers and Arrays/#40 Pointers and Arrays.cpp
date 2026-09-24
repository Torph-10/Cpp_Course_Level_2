#include <iostream>

using namespace std;

int main()
{
	int arr[4] = { 10,20,30,40 };
	int* p = arr;
	int i = 0;
	while (i < 4)
	{
		cout << p + i << endl;
		i++;
	}

	i = 0;
	cout << "\n";
	
	while (i < 4)
	{
		cout << *(p + i) << endl;
		i++;
	}

	return 0;
}