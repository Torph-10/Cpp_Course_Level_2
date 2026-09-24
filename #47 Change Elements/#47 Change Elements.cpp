#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> num{ 1, 2, 3, 4 };

	cout << "Initial vector : ";
	for (const int& i : num)
	{
		cout << i << " ";
	}

	cout << "\n Updated Vector : ";
	for (int& i : num)
	{
		i = 20;
		cout << i << " ";
	}

	num[0] = 100;
	num.at(3) = 44;
	num.at(1) = 0;

	cout << "\n Updated Vector : ";
	for (const int& i : num)
	{
		cout << i << " ";
	}

	return 0;
}