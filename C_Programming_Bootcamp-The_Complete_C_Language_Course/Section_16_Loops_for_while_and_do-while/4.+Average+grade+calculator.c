//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int grade;
    int totalSum = 0, gradesCount = 0;
    
    printf("Please enter your grades or '-1' to stop : ");
    scanf("%d", &grade);
    
    while (grade != -1)
    {
        totalSum = totalSum + grade;
        gradesCount++;
        printf("Please enter your grades or '-1' to stop: ");
        scanf("%d", &grade);
    }
    
    printf("You've entered %d grades! \n", gradesCount);
    if (gradesCount != 0)
        printf("And your AVERAGE GRADE is %f \n", (float)totalSum / gradesCount);
    
    return 0;
}