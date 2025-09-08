//To write a program to to input time in seconds and covert it to hours:minutes:seconds format 
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes and seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // Remaining seconds divided by 60 for minutes
    seconds = totalSeconds % 60;           // Remaining seconds

    // Display the result
    printf("Time is %d:%d:%d (HH:MM:SS)\n", hours, minutes, seconds);

    return 0;
}