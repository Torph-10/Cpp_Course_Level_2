#include <iostream>

using namespace std;

int main()
{
	char name[] = "Abdeslam elgarh";
	char school[] = "1337";

	printf("Dear %s, How are you?\n", name);// printf not dealling with the string data type, it the dealling with array of char, 
	printf("\nWelcome to %s school !\n", school);
	char c = 'S';
	printf("\nSetting the width of c : %*c \n", 1, c); // the printf fonc in here (%*c \n", 1, c), take the parametr 1, and replace it with espace, and the second which mean the value of c. 
	printf("Setting the width of c : %*c \n", 2, c);
	printf("Setting the width of c : %*c \n", 3, c);
	printf("Setting the width of c : %*c \n", 4, c);
	printf("Setting the width of c : %*c \n", 5, c);

	return 0;
}