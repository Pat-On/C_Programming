//Made by Vlad. Budnitski.
//AlphaTech - Programming Course.

#include <stdio.h>

int main()
{
    int totalSeconds;// 4000
    int hours, minutes, remainingSeconds;

    printf("Enter total seconds (that you want to convert): ");
    scanf("%d", &totalSeconds);

    // 60*60 = 3600

    hours = totalSeconds / 3600;
    minutes = (totalSeconds - hours * 3600) / 60;
    remainingSeconds = (totalSeconds - hours * 3600) % 60;

    printf("Total Hours: %d\n", hours);
    printf("Total Minutes: %d\n", minutes);
    printf("Total Remaining Seconds: %d\n", remainingSeconds);
    return 0;
}