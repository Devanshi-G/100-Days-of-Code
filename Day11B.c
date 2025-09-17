// To write a program to find profit or loss percentage cost given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    // Taking Input
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        // Profit Case
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit: %.2f\n", profitOrLoss);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (sellingPrice < costPrice) {
        // Loss Case
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss: %.2f\n", profitOrLoss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        // No Profit No Loss
        printf("No Profit, No Loss.\n");
    }

    return 0;
}