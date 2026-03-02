#include <stdio.h>
#include <string.h>   // for strlen() — but we keep custom version here

#define SIZE 10

// Custom string length function (learning purpose)
int my_strlen(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main(void)
{
    char testStr[SIZE];
    int stringLength;

    printf("Enter a string (max %d characters): ", SIZE - 1);

    // Safer replacement for gets()
    if (fgets(testStr, SIZE, stdin) != NULL)
    {
        // Remove trailing newline if present
        size_t len = my_strlen(testStr);
        if (len > 0 && testStr[len - 1] == '\n')
        {
            testStr[len - 1] = '\0';
        }

        stringLength = my_strlen(testStr);
        printf("The length of string \"%s\" is %d\n", testStr, stringLength);
    }
    else
    {
        printf("Input error or empty string\n");
    }

    return 0;
}