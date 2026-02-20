//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
	int x;

	int x2, x4, x6, x8;

	printf("Enter X: ");
	scanf("%d", &x);

	x2 = x * x;
	x4 = x2 * x2;
	x6 = x4 * x2;
	x8 = x4 * x4;
	printf("X^2 = %d \nX^4 = %d \nX^6 = %d \nx8 = %d \n", x2, x4, x6, x8);
	return 0;
}