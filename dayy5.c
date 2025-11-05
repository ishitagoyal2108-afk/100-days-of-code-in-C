//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60;   // Remaining minutes
    seconds = total_seconds % 60;            // Remaining seconds

    printf("Time = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}