#include <stdio.h>

// Define an enumeration for the states of a traffic light.
enum TrafficLight {
    RED,    // Assigned 0 by default
    YELLOW, // Assigned 1 by default
    GREEN   // Assigned 2 by default
};

int main() {
    // Declare a variable of the enum type.
    enum TrafficLight currentLight;

    // Set the current light to YELLOW.
    // You can change this to RED or GREEN to see different outputs.
    currentLight = YELLOW;

    // Use a switch statement to check the value of the current light.
    switch (currentLight) {
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
            // This case handles any unexpected values.
            printf("Invalid light\n");
            break;
    }

    return 0;
}