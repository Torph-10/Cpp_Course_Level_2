#include<vector>
#include<iostream>

using namespace std;
int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	cout << "First Element: " << vNumbers.front() << endl; // this fonction give you first eleme in stack.
	cout << "Last Element: " << vNumbers.back() << endl; // this fonction give you last eleme in stack.

	//returns the number of elements present in the vector.
	cout << "Size: " << vNumbers.size() << endl;

	//check the overall size of a vector.
	//and the size currenty is 5, and capacity will be 6, cuz avoid erorrs (create another vector and move all elements to it) and for optimization.
	cout << "Capacity : " << vNumbers.capacity() << endl;

	//returns 1 (true) if the vector is empty, 0 if the vector isn't empty. 
	cout << "Empty : " << vNumbers.empty() << endl;

	return 0; 
}