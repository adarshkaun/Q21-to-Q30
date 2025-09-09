// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cost_price);
    printf("Enter Selling Price: ");
    scanf("%f", &selling_price);

    profit_loss = selling_price - cost_price;

    if (profit_loss > 0) {
        percentage = (profit_loss / cost_price) * 100;
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profit_loss < 0) {
        percentage = (-profit_loss / cost_price) * 100;
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}