#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // IO functions
#include <stdlib.h>



// fgetc - file get character

int main()
{
    // Pointer to the file

    // STEP 1
    FILE* fp;       // creating a pointer that points to a FILE type

    char myChar1;
    // STEP 2 - opening / access to a file
    // fp = fopen(<file_name>, <type_of_operation>);
    // Types:
    // 'w' writing 'r' - reading 'a' - appending
    fp = fopen("myFile.txt", "r"); // "w" - create file or overwrite file if exists

    // if (fp != NULL) - to make sura that the open operation was successful
    if (fp == NULL)
        printf("Failed");
    else 
    {
        printf("file is open \n");
    
        myChar1 = fgetc(fp);
        printf("%c \n",myChar1);

        myChar1 = fgetc(fp);
        printf("%c \n",myChar1);
        // step 4 - work with a file
        // code for working with the file...


        // specifying stdin
        fgetc(stdin); // you read one character from the keyboard - fgetc is quite flexible

        // step 5 - close the file

        fclose(fp);
    }

    

    return 0;
}