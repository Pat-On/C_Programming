//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.
#include <stdio.h>


int main()
{
	int day, month, year;
	printf("Enter day: ");
	scanf("%d", &day);
	printf("Enter month: ");
	scanf("%d", &month);
	printf("Enter day: ");
	scanf("%d", &year);

	printf("Day: 0x%X \n", day);
	printf("Month: 0x%X \n", month);
	printf("Year: 0x%X \n", year);
	return 0;
}