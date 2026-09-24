#include <iostream>

using namespace std;

struct stremployes {
	string name = "";
	float salary = 0;
};

int main()
{
	stremployes employe, * ptr;
	ptr = &employe;

	employe.name = "Abdeslam Elgarh";
	employe.salary = 10000;

	cout << employe.name << endl;
	cout << employe.salary << endl;

	// using pointer 
	cout << "\n";

	cout << ptr->name << endl;
	cout << ptr->salary << endl;

	return 0;
}