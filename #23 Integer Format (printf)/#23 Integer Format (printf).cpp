#include <iostream>

using namespace std;

int main()
{
	int page = 1, totalpages = 10;

	printf("The page number = %d\n", page); // %d (digits) mean integer format.
	printf("You are in page %d of %d\n", page, totalpages);

	printf("The page number = %0*d \n", 2, page); // this (%0*d \n", 2, page) mean replace 2 of digits here include value of page, so the result will be 01
	printf("The page number = %0*d \n", 3, page);
	printf("The page number = %0*d \n", 4, page);
	printf("The page number = %0*d \n", 5, page);

	int num1 = 20, num2 = 30;

	printf("The result of %d + %d = %d \n", num1, num2, num1 + num2);
}