#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void printDate(struct Date dt)
{
    printf("Date: %02d/%02d/%04d\n", dt.day, dt.month, dt.year);
}

struct Date inputDate(void)
{
    struct Date dt;
    
    printf("Enter day (1-31): ");
    scanf("%d", &dt.day);
    
    printf("Enter month (1-12): ");
    scanf("%d", &dt.month);
    
    printf("Enter year (e.g. 2025): ");
    scanf("%d", &dt.year);
    
    return dt;
}

int main(void)
{
    struct Date graduationDate;
    struct Date todayDate;
    
    printf("=== Graduation Date ===\n");
    graduationDate = inputDate();
    
    printf("\n=== Today's Date ===\n");
    todayDate = inputDate();
    
    printf("\nResults:\n");
    printf("Graduation date: ");
    printDate(graduationDate);
    
    printf("Today's date:     ");
    printDate(todayDate);
    
    return 0;
}