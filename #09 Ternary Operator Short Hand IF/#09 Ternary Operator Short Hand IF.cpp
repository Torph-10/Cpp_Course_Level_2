#include <iostream>
using namespace std;

int main()
{
	int mark = 15;
	(mark > 0) ? cout << "POSITIVE\n" : cout << "NEGATIVE\n";


	(mark == 0) ? cout << "ZERO\n" : (mark > 0) ? cout << "POSITIVE\n" : cout << "NEGATIVE\n";
	return 0;
}