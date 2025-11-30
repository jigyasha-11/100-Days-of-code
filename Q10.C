Q10.C Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
