//To write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    //Taking the input
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the reactangle: ");
    scanf("%f", &breadth);

    //Calculating the area and perimeter
    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("The perimeter of the rectangle is %f\n", perimeter);
    printf("The area of the rectangle is %f\n", area);

    return 0;
}