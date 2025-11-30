//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

// Define enumeration for traffic lights
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;

    // Ask user to enter a traffic light value
    printf("Enter traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &light);

    // Print action based on the light
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value!\n");
    }

    return 0;
}
