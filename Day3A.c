//To write a program to convert temperature from Celsius to Fahrenheit
#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    // Taking Input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
