//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 > num2)
		printf("max = %d\n", num1);
	else
		printf("max %d\n", num2);
	return 0;
}