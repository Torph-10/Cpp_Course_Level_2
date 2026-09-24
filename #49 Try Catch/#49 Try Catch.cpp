#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> x{1, 2, 3, 4};

	try
	{
		cout << x.at(6);
	}
	catch (...)
	{
		cout << "Wrong choice\n";
	}

	return 0;
}