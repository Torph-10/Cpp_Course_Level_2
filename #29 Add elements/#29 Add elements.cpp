#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <string> vstr;
	vstr.push_back("hi");
	vstr.push_back(" dear");
	vstr.push_back("\nhow ");
	vstr.push_back("are ");
	vstr.push_back("you?\n");

	for (string& str : vstr)
		cout << str;

	return 0;
}