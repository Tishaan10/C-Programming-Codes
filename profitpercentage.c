#include <stdio.h>

int main() {
    float cp, sp, profit;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    profit = sp - cp;

    printf("Profit Percentage = %.2f%%", (profit / cp) * 100);
    return 0;
}