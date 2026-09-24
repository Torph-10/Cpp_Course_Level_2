#include <iostream>

using namespace std;

int main()
{
	int* ptrx;
	string* ptry;

	ptrx = new int;
	ptry = new string;

	*ptrx = 900;
	*ptry = "hello";

	cout << *ptrx << endl;
	cout << *ptry << endl;

	delete ptrx;
	delete ptry;

	return 0;
}