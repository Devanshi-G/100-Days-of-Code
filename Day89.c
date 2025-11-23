#include <stdio.h>

typedef enum {
    LOW = 10,
    MEDIUM = 50,
    HIGH = 100
} Level;

int main() {
    Level a = LOW;
    Level b = MEDIUM;
    Level c = HIGH;

    //Print them as integers
    printf("LOW represents: %d\n", a);
    printf("MEDIUM represents: %d\n", b);
    printf("HIGH represents: %d\n", c);

    int diff = c - a;
    printf("Difference between HIGH and LOW: %d\n", diff);

    return 0;
}