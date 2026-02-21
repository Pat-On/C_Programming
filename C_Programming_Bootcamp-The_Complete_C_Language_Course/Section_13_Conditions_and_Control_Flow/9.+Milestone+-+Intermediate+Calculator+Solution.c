//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int num1, num2;
    char mathOperation;
    printf("Enter what math operation you would like to use : ('+', '-', ..): ");
    scanf("%c", &mathOperation);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    switch (mathOperation)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 / num2);
        break;
    case '%':
        if (num2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 % num2);
        break;
    default:
        printf("Wrong mathematical operation.. Try again. \n");
        break;
    }
}