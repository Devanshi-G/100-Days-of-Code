//To write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, circumference, area;

    //Taking the input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    //Calculating the area and circumference
    area = PI *radius * radius;
    circumference = 2 * PI * radius;

    printf("The area of the circle is %f\n", area);
    printf("The circumference of the circle is  %f\n", circumference);

    return 0;
}