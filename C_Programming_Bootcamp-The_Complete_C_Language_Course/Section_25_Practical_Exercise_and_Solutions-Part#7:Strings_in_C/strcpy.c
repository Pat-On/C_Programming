#include <stdio.h>      // assumed — not visible but needed
#include <stdlib.h>

char *strcpycpy(char *destination, char *source)
{
    char *tempPtr;
    int i = 0;
    tempPtr = destination;

    while (source[i] != '\0')   // Till we got to the end of the source string
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    return tempPtr;
}

int main()
{
    char myNickName[] = "AlphaTech";
    char copyOfNickName[30];
    char *tempResult;

    tempResult = strcpycpy(copyOfNickName, myNickName);

    printf("The new copied string is: %s \n", tempResult);
    printf("The new copied string is: %s \n", copyOfNickName);

    return 0;
}