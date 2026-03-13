#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // IO functions
#include <stdlib.h>

int main()
{
    FILE* fp;       // creating a pointer that points to a FILE type



    char myChar1;

    fp = fopen("myFile3.txt", "w"); // "w" - create file or overwrite file if exists



    // if (fp != NULL) - to make sura that the open operation was successful
    if (fp == NULL)
        printf("Failed");
    else 
    {
        printf("file is open \n");
         

        fputs("this is my string", fp);

        fclose(fp);
    }



    return 0;
}