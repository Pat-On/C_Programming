//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
	int num;
	int i;

	printf("Hello! Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("%d ", i);
	}
	return 0;

}