#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // IO functions
#include <stdlib.h>

int main()
{
    FILE* fp;       // creating a pointer that points to a FILE type



    char myChar1;
    char myString[10];
    int count = 0;

    fp = fopen("myFile3.txt", "w"); // "w" - create file or overwrite file if exists



    // if (fp != NULL) - to make sura that the open operation was successful
    if (fp == NULL)
        printf("Failed");
    else 
    {
        printf("file is open \n");

        fputs("this is my string \n", fp);
        fputs("this is my string 2 \n", fp);
        fputs("this is my string 3 \n", fp);
        
        fclose(fp);
    }
    fp = fopen("myFile3.txt", "r"); // "w" - create file or overwrite file if exists
    
    while (fgets(myString, 10, fp))
        printf("string %d read: %s \n", ++count, myString);


    return 0;
}

// EOF - is not stored at the end of the file. 
// it is just indicator for the low level the system that is indicating that we reach the end of the file
// it is not the same like \n - nothing new