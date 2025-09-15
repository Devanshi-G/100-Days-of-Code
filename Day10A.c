// To write a program to classify a triangle as equilateral, isosceles, or scalene based on its side length
#include <stdio.h>

int main() {
    float a, b, c;

    // Taking Input
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if (a == b || b == c || a == c) {
         printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
     }


    return 0;
}