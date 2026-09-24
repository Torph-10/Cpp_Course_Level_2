#include <iostream>

using namespace std;

int main()
{
	int total = 0;

	cout << "Please enter how many students you want?\n";
	cin >> total;

	float* ptr = new float[total];
	
	cout << "Enter a grades of students : \n";
	for (int i = 0; i < total; i++)
	{
		cout << "Student" << i + 1 << " : ";
		cin >> ptr[i];
		cout << "\n";
	}
	cout << "Display grades of students\n";
	for (int i = 0; i < total; i++)
	{
		cout << "Student" << i + 1 << " : ";
		cout << ptr[i] << endl;
	}

	delete[] ptr;

	return 0;
}