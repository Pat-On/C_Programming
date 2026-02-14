//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>

int main()
{
	int currentYear;
	int age;
	int birthYear;

	scanf("%d", &currentYear);
	scanf("%d", &age);

	birthYear = currentYear - age;

	printf("You were born in %d \n", birthYear);

	return 0;
}