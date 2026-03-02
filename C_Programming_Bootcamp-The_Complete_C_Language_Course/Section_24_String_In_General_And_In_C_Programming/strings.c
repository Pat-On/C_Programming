#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int strlen(char *str)
{
    int i = 0, length = 0;

    while (str[i] != '\0')
    {
        i++;
        length++;
    }

    return length;
}

int main()
{
    int stringLength;
    char testStr[SIZE];

    gets(testStr);   // Note: gets() is unsafe and deprecated

    stringLength = strlen(testStr);

    printf("The length of string '%s' is %d\n", testStr, stringLength);

    return 0;
}