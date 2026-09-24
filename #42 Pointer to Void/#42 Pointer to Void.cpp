#include <iostream>

using namespace std;

int main()
{
	void* ptr; // that used to make pointer to point on any kind of data type.

	int x = 90;
	ptr = &x;

	cout << ptr << endl;
	cout << *(static_cast<int*>(ptr)) << endl;

	cout << "\n";

	string str = "hello";
	ptr = &str;

	cout << ptr << endl;
	cout << *(static_cast<string*>(ptr)) << endl;

	return 0;
}