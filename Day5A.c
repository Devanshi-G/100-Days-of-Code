//To write a program to calculate simple and compound interest for given principal, rate and time.
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float SI, CI;

    //Taking Input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time per annum: ");
    scanf("%f", &time);

    //Calculating simple and compound interest
    SI = ( principal * rate * time ) / 100;
    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %f\n", SI);
    printf("Compound Interest = %f\n", CI);

    return 0;
}