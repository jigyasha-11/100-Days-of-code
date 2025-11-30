//Write a program to input an integer and check whether it is even or odd using if–else.
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
