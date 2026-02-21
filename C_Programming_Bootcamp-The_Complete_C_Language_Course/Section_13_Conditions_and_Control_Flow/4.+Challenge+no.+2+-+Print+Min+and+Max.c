//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>
#include <stdlib.h>
/* Finding MAX and MIN between 2 numbers */
int main()
{
	float numl, num2;
	printf("Enter num1: ");
	scanf("%f", &numl);
	printf("Enter num2: ");
	scanf("%f", &num2);
	if (numl > num2)
	{
		printf("MAXIMUM = %f \n", numl);
		printf("MINIMUM = %f \n", num2);
	}
	else
	{
		printf("MAXIMUM = %f \n", num2);
		printf("MINIMUM = %f \n", numl);
	}
	return 0;
}