//create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

// Define enumeration for days
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Print each day with its integer value
    printf("Days of the week with their integer values:\n");
    printf("SUNDAY: %d\n", SUNDAY);
    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);
    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);

    return 0;
}
