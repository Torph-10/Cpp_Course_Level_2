#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> x = { 1, 2, 3, 4 };

	for (int i = 0; i < 4; i++)
		cout << x[i] << " ";
	cout << "\n";

	return 0;
}