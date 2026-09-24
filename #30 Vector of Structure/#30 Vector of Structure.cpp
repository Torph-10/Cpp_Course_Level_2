#include <iostream>
#include <vector>

using namespace std;

struct semployees {
	string first_name;
	string last_name;
	float salary;
};

void read_data(vector <semployees> &vemploye)
{
	semployees employes;
	char answer = 'Y';

	do
	{
		cout << "Please enter your first name ?\n";
		cin >> employes.first_name;
		cout << "Please enter your last name ?\n";
		cin >> employes.last_name;
		cout << "Please enter your salary ?\n";
		cin >> employes.salary;
		vemploye.push_back(employes); // here the vector store all(f&lname & salary) data struct, in one time.

		cout << "\nDo you want to store more data (Y/N)?\n";
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');
}
void print_data(vector <semployees>& vemploye)
{
	for (semployees &employees : vemploye)
	{
		cout << "First Name : " << employees.first_name << endl;
		cout << "Last Name : " << employees.last_name << endl;
		cout << "Salary : " << employees.salary << endl;
		cout << endl;
	}
}
int main()
{
	semployees employee;
	vector <semployees> vemployees;

	read_data(vemployees);
	print_data(vemployees);

	return 0;
}