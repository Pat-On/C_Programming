#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main()
{
    struct date graduateDate;
    
    printf("Enter day: ");
    scanf("%d", &graduateDate.day);
    
    printf("Enter month: ");
    scanf("%d", &graduateDate.month);
    
    printf("Enter year: ");
    scanf("%d", &graduateDate.year);
    
    printf("The graduation date is: %02d/%02d/%04d\n",
           graduateDate.day,
           graduateDate.month,
           graduateDate.year);
    
    return 0;
}