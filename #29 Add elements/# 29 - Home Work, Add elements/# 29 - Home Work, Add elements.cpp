#include <iostream>
#include <vector>

using namespace std;

void read_number(vector <int> &number)
{
	int x = 0;
	string answer;
	do
	{
		cout << "Enter number\n";
		cin >> x;
		number.push_back(x);

		cout << "Do you want to add more number (YES/NO) ?\n";
		cin >> answer;
	} while (answer == "YES" || answer == "yes");
}

void print_vec_elements(vector <int> &vnumbers)
{
	for (int& num : vnumbers)
		cout << num << " ";
}
int main()
{
	vector <int> vnumber;

	read_number(vnumber);
	print_vec_elements(vnumber);

	return 0;
}