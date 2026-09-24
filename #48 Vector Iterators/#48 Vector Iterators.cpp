#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> num{ 10, 20, 30, 40 };
	vector<int>::iterator x;

	for (x = num.begin(); x != num.end(); x++)
	{
		cout << *x << " ";
	}


	return 0;
}