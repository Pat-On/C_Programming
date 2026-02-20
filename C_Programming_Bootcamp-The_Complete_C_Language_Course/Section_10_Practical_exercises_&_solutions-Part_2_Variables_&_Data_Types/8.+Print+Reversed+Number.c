//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
	int num; // 531
	int reversedNum;
	int units, tens, hundreds;
	printf("Enter a 3-digit number: ");
	scanf("%d", &num);
	units = num % 10; // 1
	tens = (num / 10) % 10; // 3
	hundreds = num / 100; // 5
	
	reversedNum = units; // 1
	reversedNum = reversedNum * 10 + tens; // 13
	reversedNum = reversedNum * 10 + hundreds; // 130 + 5 = 135

	printf("Reversed Number of %d is: %d%d%d \n", num, units, tens, hundreds);
	printf("Reversed Number of %d = %d \n", num, reversedNum);

	return 0;
}