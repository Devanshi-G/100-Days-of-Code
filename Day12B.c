// To write a code to calculate the electricity bill
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 7);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 7) + ((units - 300) * 12);
    }

    printf("Electricity bill for %d units is: ₹%.2f\n", units, bill);

    return 0;
}