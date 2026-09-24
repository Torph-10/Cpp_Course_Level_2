#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> elements;

	elements.push_back(100);
	elements.push_back(200);
	elements.push_back(300);
	elements.push_back(400);
	elements.push_back(500);

	// For remove ELEMENTS from Stack, there is two ways, remove, elements by eleme, or remove all elem in one time.
	cout << "Stack Size = " << elements.size() << endl;
	elements.pop_back(); // remove elements by elements. 
	elements.pop_back();
	elements.pop_back();
	elements.pop_back();
	elements.pop_back(); 
	-

	if (!elements.empty()) // or you can use this condition <if (elements.size() > 0)>
		elements.pop_back(); // this for remove any elements if was forgotten in stack.

	
	elements.clear(); // this remove all elements in once.

	cout << "Stack Size = " << elements.size() << endl;

	return 0;
}