//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int num, pow; // num = 2, pow = 3 <---> num*num*num = 2*2*2 = 8
    int tempPow;
    int result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a POWER: ");
    scanf("%d", &pow);
    tempPow = pow;
    while (pow > 0)
    {
        result = result * num; // result*=num;
        pow--;
    }
    
    printf("%d ^ %d = %d \n", num, tempPow, result);
    
    return 0;
}